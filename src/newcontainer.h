#ifndef NEWCONTAINER_H
#define NEWCONTAINER_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>

template <typename T>
class fixed_array
{
    public:

        typedef int size_type;

        class iterator
        {
            public:
                typedef iterator self_type;
                typedef T value_type;
                typedef T& reference;
                typedef T* pointer;
                typedef std::random_access_iterator_tag iterator_category;
                typedef int difference_type;
                iterator(pointer ptr) : ptr_(ptr) { }
                self_type operator++() { self_type i = *this; ptr_++; return i; }
                self_type operator++(int junk) { ptr_++; return *this; }
                self_type operator--() { self_type i = *this; ptr_--; return i; }
                self_type operator--(int junk) { ptr_--; return *this; }
                reference operator*() { return *ptr_; }
                pointer operator->() { return ptr_; }
                bool operator==(const reference rhs) { return ptr_ == rhs.ptr_; }
                bool operator!=(const reference rhs) { return ptr_ != rhs.ptr_; }
                bool operator<=(const reference rhs) { return ptr_ <= rhs.ptr_; }
                bool operator>=(const reference rhs) { return ptr_ >= rhs.ptr_; }
                bool operator>(const reference rhs) { return ptr_ > rhs.ptr_; }
                bool operator<(const reference rhs) { return ptr_ > rhs.ptr_; }
                self_type& operator+=(const difference_type&n){ptr_+n; return*this;}
                self_type operator+(const difference_type&n){ptr_+n; return*this;}

                //self_type operator+(const difference_type&n) { self_type i = *this; ptr_+n; return i; }
                //self_type operator+(const value_type rhs) { /*self_type i = *this; ptr_+rhs.ptr_; return i;*/self_type i; return i; }
            private:
                pointer ptr_;
        };

        class const_iterator
        {
            public:
                typedef const_iterator self_type;
                typedef T value_type;
                typedef T& reference;
                typedef T* pointer;
                typedef int difference_type;
                typedef std::forward_iterator_tag iterator_category;
                const_iterator(pointer ptr) : ptr_(ptr) { }
                self_type operator++() { self_type i = *this; ptr_++; return i; }
                self_type operator++(int junk) { ptr_++; return *this; }
                self_type operator--() { self_type i = *this; ptr_--; return i; }
                self_type operator--(int junk) { ptr_--; return *this; }
                const reference operator*() { return *ptr_; }
                const pointer operator->() { return ptr_; }
                bool operator==(const reference rhs) { return ptr_ == rhs.ptr_; }
                bool operator!=(const reference rhs) { return ptr_ != rhs.ptr_; }
                bool operator<=(const reference rhs) { return ptr_ <= rhs.ptr_; }
                bool operator>=(const reference rhs) { return ptr_ >= rhs.ptr_; }
                bool operator>(const reference rhs) { return ptr_ > rhs.ptr_; }
                bool operator<(const reference rhs) { return ptr_ > rhs.ptr_; }
                self_type operator+(const difference_type&n) { self_type i = *this; ptr_+n; return i; }
            private:
                pointer ptr_;
        };


        fixed_array(size_type size) : size_(size) {
            data_ = new T[size_];
        }

        size_type size() const { return size_; }

        T& operator[](size_type index)
        {
            assert(index < size_);
            return data_[index];
        }

        const T& operator[](size_type index) const
        {
            assert(index < size_);
            return data_[index];
        }

        iterator begin()
        {
            return iterator(data_);
        }

        iterator end()
        {
            return iterator(data_ + size_);
        }

        const_iterator begin() const
        {
            return const_iterator(data_);
        }

        const_iterator end() const
        {
            return const_iterator(data_ + size_);
        }

    private:
        T* data_;
        size_type size_;
};

#endif // NEWCONTAINER_H
