// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cpp/video/atoms/atom_sv3d.h"

#include "cpp/video/atom_registry.h"

namespace vr180 {

const char kType[] = "sv3d";

AtomSV3D::AtomSV3D() : Atom(0, 0, kType) { Update(); }

AtomSV3D::AtomSV3D(Atom::AtomSize header_size, Atom::AtomSize data_size,
                   const std::string& atom_type)
    : Atom(header_size, data_size, atom_type) {}

REGISTER_ATOM(AtomSV3D, kType);

}  // namespace vr180
