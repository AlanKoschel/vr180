# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

package(default_visibility = ["//visibility:public"])

licenses(["notice"])

load("//javatests/com/google/vr180/testhelpers:sdk_versions.bzl", "MANIFEST_VALUES")

android_local_test(
    name = "BitrateEstimatorTest",
    srcs = ["BitrateEstimatorTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/media",
        "@com_google_truth//jar",
        "@httpclient//jar",
        "@httpcore//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "RtmpOutputStreamTest",
    srcs = ["RtmpOutputStreamTest.java"],
    manifest = "AndroidManifest.xml",
    deps = [
        "//java/com/google/vr180/media",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "RtmpInputStreamTest",
    srcs = ["RtmpInputStreamTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/media",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "ActionMessageFormatTest",
    srcs = ["ActionMessageFormatTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/media",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "FasterPipedInputStreamTest",
    srcs = ["FasterPipedInputStreamTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/media",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "RtmpConnectionTest",
    srcs = ["RtmpConnectionTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/media",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "RtmpContinuityManagerTest",
    srcs = ["RtmpContinuityManagerTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/media",
        "//javatests/com/google/vr180/testhelpers",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)
