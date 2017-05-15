/*****************************************************************
 * Homework 2 header file for STL basic vector operations
 *
 * @author Evan Kiel
 * @version 5/14/2017
 *****************************************************************/

#ifndef __H_STL_FUNCTIONS__
#define __H_STL_FUNCTIONS__

/** includes for vector and string */
#include <vector>
#include <string>

/**
 * copyVec
 * Must use the STL std::copy.
 */
// Hints:  You need to create a new vector.
// Hints:  Are they the same size?

std::vector<int> copyVec(const std::vector<int> & oldVector);

/**
 * sortVec
 * Must use STL std::sort function
 */

void sortVec(std::vector<int> & oldVector);

/**
 * doubleVec
 * Must use STL std::for_each
 */

void doubleVec(std::vector<int> & oldVector);

/**
 * containsItem
 * Must use STL std::find
 */

bool containsItem(std::vector<std::string> & ourVector, std::string item);

/**
 * inBoth
 * Returns a vector that contains only the elements that
 * are in both of the input parameter vectors.
 */

std::vector<int> inBoth(std::vector<int> a, std::vector<int> b);

#endif
