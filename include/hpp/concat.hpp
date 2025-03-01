#pragma once

#define DETAIL_HPP_CONCAT_EXPAND(x, y) x ## y
#define HPP_CONCAT(x, y) DETAIL_HPP_CONCAT_EXPAND(x, y)
