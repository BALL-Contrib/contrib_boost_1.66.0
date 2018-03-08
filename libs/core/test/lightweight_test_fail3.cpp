//
// Negative test for BOOST_TEST_EQ
//
// Copyright (c) 2014 Peter Dimov
//
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//

#include <boost/detail/lightweight_test.hpp>

int main()
{
    int x = 0;

    BOOST_TEST_EQ( x, 1 );

    return boost::report_errors();
}
