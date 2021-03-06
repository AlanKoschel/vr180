/*
 * Copyright 2018 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "cpp/video/edts_inject.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "cpp/common/io.h"
#include "cpp/video/modify_moov.h"

namespace vr180 {

void TestInjectFromFile(const std::string& input_file, const std::string& expected_file) {
  std::string temp_file =  "vr180.mp4";
  SetFileContents(temp_file, GetFileContentsOrEmpty(input_file));
  EXPECT_TRUE(ModifyMoov(InjectEdtsToMoov, temp_file, temp_file).ok());
  const std::string result = GetFileContentsOrEmpty(temp_file);
  const std::string expected = GetFileContentsOrEmpty(expected_file);
  EXPECT_TRUE(result == expected) << result.size() << " " << expected.size();
}

TEST(InjectEdtsBox, InjectFromFileWithEdtsMissing) {
  const std::string video_file_name =
      
      "cpp/video/testdata/edts_missing.mp4";
  const std::string expected_video_file_name =
      
      "cpp/video/testdata/edts_inject.mp4";
  TestInjectFromFile(video_file_name, expected_video_file_name);
}

TEST(InjectEdtsBox, InjectFromFileWithEdtsMisordered) {
  const std::string video_file_name =
      
      "cpp/video/testdata/edts_misordered.mp4";
  const std::string expected_video_file_name =
      
      "cpp/video/testdata/edts_reorder.mp4";
  TestInjectFromFile(video_file_name, expected_video_file_name);
}

}  // namespace vr180
