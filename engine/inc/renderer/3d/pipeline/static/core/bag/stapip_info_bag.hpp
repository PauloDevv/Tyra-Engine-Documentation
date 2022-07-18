/*
# ______       ____   ___
#   |     \/   ____| |___|
#   |     |   |   \  |   |
#-----------------------------------------------------------------------
# Copyright 2022, tyra - https://github.com/h4570/tyra
# Licenced under Apache License 2.0
# Sandro Sobczyński <sandro.sobczynski@gmail.com>
*/

#pragma once

#include <draw.h>
#include "math/m4x4.hpp"
#include "math/vec4.hpp"
#include "../../stapip_shading_type.hpp"

namespace Tyra {

class StaPipInfoBag {
 public:
  StaPipInfoBag();
  ~StaPipInfoBag();

  /** Mandatory. Model matrix */
  M4x4* model;

  StaPipShadingType shadingType;
  bool blendingEnabled;
  bool antiAliasingEnabled;
  bool noClipChecks;
};

}  // namespace Tyra
