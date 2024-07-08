#include "UnitTest++.h"
#include "vetores.h"

    namespace
    {

    TEST(OurFirstTest)
    {
        const bool Result = soma(1,1);
        CHECK_EQUAL(true, Result);
    }

    }
