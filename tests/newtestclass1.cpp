/*
 * File:   newtestclass1.cpp
 * Author: Nicolas
 *
 * Created on 26-Jan-2014, 1:26:27 AM
 */

#include "newtestclass1.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass1);

newtestclass1::newtestclass1() {
}

newtestclass1::~newtestclass1() {
}

void newtestclass1::setUp() {
}

void newtestclass1::tearDown() {
}

void newtestclass1::testMethod() {
    CPPUNIT_ASSERT(true);
}

void newtestclass1::testFailedMethod() {
    CPPUNIT_ASSERT(false);
}

