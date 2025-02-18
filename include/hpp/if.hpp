#pragma once

//inplace #if analog
//condition must be 0 or 1
#define DETAIL_HPP_IF0(...)
#define DETAIL_HPP_IF1(...) __VA_ARGS__
#define DETAIL_HPP_IF(COND) DETAIL_HPP_IF ## COND
#define HPP_IF(COND) DETAIL_HPP_IF(COND)

#define DETAIL_HPP_EMPTY(...)
#define DETAIL_HPP_NON_EMPTY(...) __VA_ARGS__
#define DETAIL_HPP_IFE0(...) DETAIL_HPP_NON_EMPTY
#define DETAIL_HPP_IFE1(...) __VA_ARGS__ DETAIL_HPP_EMPTY
#define DETAIL_HPP_IFE(COND) DETAIL_HPP_IFE ## COND
#define HPP_IFE(COND) DETAIL_HPP_IFE(COND)
