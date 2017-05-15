/*****************************************************************
 * Homework 2 solution working with vectors and strings including 
 * references and guards, Using the STL library to perform basic
 * operations on vectors
 *
 * @author Evan Kiel
 * @version 5/14/2017
 *****************************************************************/

/** required includes for vectors and string operations*/
#include "stl_functions.h"
#include <algorithm>
#include <vector>
#include <string>

/** return a copy of old string */
std::vector<int> copyVec(const std::vector<int> & oldVector){
	std::vector<int> ret (oldVector.size());
	std::copy(oldVector.begin(), oldVector.end(), ret.begin());
	return ret;	
}

/** sort int values in a vector */
void sortVec(std::vector<int> & oldVector){
	std::sort(oldVector.begin(), oldVector.end());
}

/** double the int values in a vector referenced source below */
// http://stackoverflow.com/questions/2047414
// /advantages-of-stdfor-each-over-for-loop
void doubleVec(std::vector<int> & oldVector){
	std::for_each(oldVector.begin(), oldVector.end(),  [](int& i){
		i*=2;
	});
}

/** determine if item is contained in the provided vector and return bool */
bool containsItem(std::vector<std::string> & ourVector, std::string item){
	bool ret;
	if(std::find(ourVector.begin(),ourVector.end(),item) != ourVector.end())
		ret = true;
	else
		ret = false;
	return ret;
}

/** return a vector of values that are present in both vectors */
//http://www.cplusplus.com/reference/algorithm/set_intersection/
std::vector<int> inBoth(std::vector<int> a, std::vector<int> b){
	std::vector<int>::iterator it;
	std::vector<int> ret(a.size());
	sortVec(a);
	sortVec(b);
	it=std::set_intersection(a.begin(), a.end(), b.begin(), \
		 b.end(),ret.begin());
	ret.resize(it-ret.begin());
	return ret;
}





