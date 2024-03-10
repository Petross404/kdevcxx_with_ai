#pragma once

#include <aiprocess/string_view.h>
#include <source_location>

namespace aiprocess
  {
using src_loc = std::source_location;

[[nodiscard]]
static consteval src_loc sl_current(src_loc l = src_loc::current()) noexcept
  {
  return l;
  }
  }  // namespace aiprocess
