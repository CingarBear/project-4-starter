///////////////////////////////////////////////////////////////////////////////
// crossing_algs.hpp
//
// Algorithms that solve the marsh crossing problem.
//
// All of the TODO sections for this project reside in this file.
//
// This file builds on crossing_types.hpp, so you should familiarize yourself
// with that file before working on this file.
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cassert>
#include <iostream>

#include "crossing_types.hpp"

namespace crossing {
// Solve the marsh crossing problem for the given grid, using an exhaustive
// optimization algorithm.
//
// This algorithm is expected to run in exponential time, so the grid's
// width+height must be small enough to fit in a 64-bit int; this is enforced
// with an assertion.
//
// The grid must be non-empty.
unsigned int marsh_crossing_exhaustive(const grid& setting) {

  // grid must be non-empty.
  assert(setting.rows() > 0);
  assert(setting.columns() > 0);

  // Compute the path length, and check that it is legal.
  const size_t steps = setting.rows() + setting.columns() - 2;
  assert(steps < 64);

  // TODO: implement the exhaustive optimization algorithm, then delete this
  // comment.

  unsigned int count_paths = 0;
  return count_paths;
}

// Solve the marsh crossing problem for the given grid, using a dynamic
// programming algorithm.
//
// The grid must be non-empty.
unsigned int marsh_crossing_dyn_prog(const grid& setting) {

  // grid must be non-empty.
  assert(setting.rows() > 0);
  assert(setting.columns() > 0);

  // TODO: implement the dynamic programming algorithm, then delete this
  // comment.
    
  unsigned int A[100][100];
  A[0][0] = 1;

  return A[setting.rows()-1][setting.columns()-1];
}

}
