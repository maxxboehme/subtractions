#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>

#include "gtest/gtest.h"

#include "prints.h"
#include "Subtractions.h"


TEST(Subtractions, calc_subtractions){
   int result = calc_subtractions(4, 17);
   ASSERT_EQ(8, result);   
}

TEST(Subtractions, calc_subtractions_2){
   int result = calc_subtractions(7, 987654321);
   ASSERT_EQ(141093479, result);   
}

TEST(Subtractions, calc_subtractions_3){
   int result = calc_subtractions(5, 5);
   ASSERT_EQ(1, result);   
}

TEST(Subtractions, subtractions_solve){
   std::stringstream r(
      "2\n"
      "4 17\n"
      "7 987654321\n");
   std::stringstream w;
   subtractions_solve(r, w);
   ASSERT_EQ(
      "8\n"
      "141093479\n", w.str());
}

TEST(Subtractions, subtractions_solve_2){
   std::stringstream r(
      "10\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n"
      "7 987654321\n");
   std::stringstream w;
   subtractions_solve(r, w);
   ASSERT_EQ(
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n"
      "141093479\n", w.str());
}
