#ifndef SOMERANDACCIT_H
#define SOMERANDACCIT_H

#include <boost/concept_check.hpp>

namespace mylib{
    template <typename T>
    struct RandomAccessIterator {
            BOOST_CONCEPT_USAGE(RandomAccessIterator){
                BOOST_CONCEPT_ASSERT((boost::Convertible<
                    BOOST_DEDUCED_TYPENAME boost::BidirectionalIterator<T>::iterator_category
                  , std::random_access_iterator_tag
                >));
                //bool result = left < right;  // required boolean < operator
                r += n;
                a + n;
                n + a;
                r -= n;
                i - n;
                b - a;
                i[n];
                a < b;
                a > b;
                a >= b;
                a <= b;
            }
        private:
            typedef typename std::iterator_traits<T>::difference_type difference_type;
            T i, a, b;
            T& r;
            difference_type n;
    };
}

#endif // SOMERANDACCIT_H
