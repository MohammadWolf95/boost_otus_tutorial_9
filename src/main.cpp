#include "somerandaccit.h"
#include <algorithm>
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include "newcontainer.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<fixed_array<int>::iterator>));

    BOOST_CONCEPT_ASSERT((mylib::RandomAccessIterator<std::array<int, 1>::iterator>));
    cout<<"Hello WOrld"<<endl;
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::vector<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::deque<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::forward_list<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::list<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::set<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::map<int, int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::multiset<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::multimap<int, int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::unordered_set<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::unordered_map<int, int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::unordered_multiset<int>::iterator>));
    //BOOST_CONCEPT_ASSERT((RandomAccessIterator<std::unordered_multimap<int, int>::iterator>));
}
