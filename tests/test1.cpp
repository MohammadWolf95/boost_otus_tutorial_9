#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Random1

#include "../src/somerandaccit.h"
#include "../src/newcontainer.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(Test1)

BOOST_AUTO_TEST_CASE(Vector){
	BOOST_CONCEPT_ASSERT((mylib::RandomAccessIterator<std::vector<int>::iterator>));
}

BOOST_AUTO_TEST_SUITE_END()
