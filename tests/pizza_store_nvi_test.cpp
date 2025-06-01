#include "../include/pizza_store_nvi.h"
#include <gtest/gtest.h>

TEST(PizzaStoreNVITest, DeliciousPizza) {
    DeliciousPizzaStoreNVI store;
    testing::internal::CaptureStdout();
    store.MakePizza();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("delicious") != std::string::npos);
}

TEST(PizzaStoreNVITest, PoorPizza) {
    PoorPizzaStoreNVI store;
    testing::internal::CaptureStdout();
    store.MakePizza();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("poor") != std::string::npos);
}
