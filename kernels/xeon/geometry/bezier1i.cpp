// ======================================================================== //
// Copyright 2009-2015 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#include "bezier1i.h"

namespace embree
{
  SceneBezier1i SceneBezier1i::type;

  Bezier1iType::Bezier1iType () 
    : PrimitiveType("bezier1i",sizeof(Bezier1i),1) {} 
  
  size_t Bezier1iType::size(const char* This) const {
    return 1;
  }

  Bezier1iMBType Bezier1iMBType::type;

  Bezier1iMBType::Bezier1iMBType () 
    : PrimitiveType("bezier1imb",sizeof(Bezier1iMB),1) {} 
  
  size_t Bezier1iMBType::size(const char* This) const {
    return 1;
  }
}
