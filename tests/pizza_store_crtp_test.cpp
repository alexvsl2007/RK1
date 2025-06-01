#include "../include/pizza_store_crtp.h"
#include <gtest/gtest.h>

TEST(PizzaStoreCRTPTest, DeliciousPizza) {
    DeliciousPizzaStoreCRTP store;
    testing::internal::CaptureStdout();
    store.MakePizza();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("delicious") != std::string::npos);
}

TEST(PizzaStoreCRTPTest, PoorPizza) {
    PoorPizzaStoreCRTP store;
    testing::internal::CaptureStdout();
    store.MakePizza();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("poor") != std::string::npos);
}
