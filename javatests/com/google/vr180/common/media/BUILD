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
    name = "BitmapIOTest",
    srcs = ["BitmapIOTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/common",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "VrVideoCropTest",
    srcs = ["VrVideoCropTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "@glide//aar",
        "//java/com/google/vr180/common",
        "//proto:camera_api_java_proto_lite",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "MediaStoreUtilTest",
    srcs = ["MediaStoreUtilTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "//java/com/google/vr180/common",
        "//javatests/com/google/vr180/testhelpers",
        "//javatests/com/google/vr180/testhelpers/shadows",
        "@com_google_truth//jar",
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
    ],
)

android_local_test(
    name = "MediaInfoTest",
    srcs = ["MediaInfoTest.java"],
    manifest_values = MANIFEST_VALUES,
    deps = [
        "@junit//jar",
        "@mockito//jar",
        "@robolectric//bazel:robolectric",
        "@com_google_truth//jar",
        "//java/com/google/vr180/common",
        "//javatests/com/google/vr180/testhelpers/shadows",
    ],
)
