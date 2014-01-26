/*
 * File:   testJordan.h
 * Author: Nicolas
 *
 * Created on 26-Jan-2014, 1:31:40 AM
 */

#ifndef TESTJORDAN_H
#define	TESTJORDAN_H

#include <cppunit/extensions/HelperMacros.h>

class testJordan : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(testJordan);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    testJordan();
    virtual ~testJordan();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* TESTJORDAN_H */

