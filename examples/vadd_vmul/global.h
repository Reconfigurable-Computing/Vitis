#pragma once

#include "xcl2.hpp"

// HBM channels
#define MAX_HBM_CHANNEL_COUNT 32
#define CHANNEL_NAME(n) n | XCL_MEM_TOPOLOGY
const int HBM[MAX_HBM_CHANNEL_COUNT] = {
    CHANNEL_NAME(0),  CHANNEL_NAME(1),  CHANNEL_NAME(2),  CHANNEL_NAME(3),  CHANNEL_NAME(4),  CHANNEL_NAME(5),
    CHANNEL_NAME(6),  CHANNEL_NAME(7),  CHANNEL_NAME(8),  CHANNEL_NAME(9),  CHANNEL_NAME(10), CHANNEL_NAME(11),
    CHANNEL_NAME(12), CHANNEL_NAME(13), CHANNEL_NAME(14), CHANNEL_NAME(15), CHANNEL_NAME(16), CHANNEL_NAME(17),
    CHANNEL_NAME(18), CHANNEL_NAME(19), CHANNEL_NAME(20), CHANNEL_NAME(21), CHANNEL_NAME(22), CHANNEL_NAME(23),
    CHANNEL_NAME(24), CHANNEL_NAME(25), CHANNEL_NAME(26), CHANNEL_NAME(27), CHANNEL_NAME(28), CHANNEL_NAME(29),
    CHANNEL_NAME(30), CHANNEL_NAME(31)};

const int DDR[2] = {CHANNEL_NAME(32), CHANNEL_NAME(33)};

//使用更现代化的std容器。若不想使用vector容器，可使用utils.hpp中提供的方法对齐创建数组，写法为：DTYPE* In_R =
// aligned_alloc<DTYPE>(SIZE * sizeof(DTYPE))
// TODO: 修改内存分配类型
using vec_t = std::vector<int, aligned_allocator<int> >; // vadd,vmul中使用的是int类型

#define N 1000

typedef int dt;