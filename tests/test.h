#ifndef TEST_H
#define	TEST_H

#include <cppunit/extensions/HelperMacros.h>

class test : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(test);

    CPPUNIT_TEST(testJordan);
    CPPUNIT_TEST(testJoan);

    CPPUNIT_TEST_SUITE_END();

private:
    void testJordan();
    void testJoan();
};

#endif	/* TEST_H */

