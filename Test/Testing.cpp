#include <catch2/catch_test_macros.hpp>
#include "../Headers/method.h"

TEST_CASE("2*2 should return 4", "[multiply]") {
    REQUIRE(multiply(2,2) == 4);
}