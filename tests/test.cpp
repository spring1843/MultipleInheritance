#include "test.h"
#include "animals.h"

CPPUNIT_TEST_SUITE_REGISTRATION(test);

void test::testJordan() {
    Eagle Jordan;
    CPPUNIT_ASSERT(!Jordan.CanMilkBabies(false));
    CPPUNIT_ASSERT(!Jordan.CanHaveVenom(false));
    CPPUNIT_ASSERT(Jordan.CanLayEggs(false));
    CPPUNIT_ASSERT(!Jordan.CanSwim(false));
}

void test::testJoan() {
    
   Platypus Joan;
  
   CPPUNIT_ASSERT(Joan.CanMilkBabies(false));
   CPPUNIT_ASSERT(Joan.CanHaveVenom(false));
   CPPUNIT_ASSERT(Joan.CanLayEggs(false));
   CPPUNIT_ASSERT(Joan.CanSwim(false));
}
