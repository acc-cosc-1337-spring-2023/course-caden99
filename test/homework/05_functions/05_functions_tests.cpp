#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify GC content calculation") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .5);

}

 TEST_CASE("Verify correct complement") {
 	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
 	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
 	REQUIRE(get_dna_complement("CCC") == "GGG");
 }

TEST_CASE("Verify reverse string"){
	REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}
 
