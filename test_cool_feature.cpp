
#define CATCH_CONFIG_MAIN  
#include <catch.hpp>
#include "cool_feature.hpp"

TEST_CASE( "cool feature", "[feature]" ) {
    REQUIRE( cool_feature()  == 42 );
}
