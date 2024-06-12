#include <gtest/gtest.h>
#include <vector>
using namespace std;
// Тест 1: Проверка на вектор с положительными числами
TEST(IncrementVectorTest, PositiveNumbers) {
    vector<int> vec = {1, 2, 3, 4, 5};
    int n = 2;
    vector<int> expected = {3, 4, 5, 6, 7};
    EXPECT_EQ(incrementVector(vec, n), expected);
}

// Тест 2: Проверка на вектор с отрицательными числами
TEST(IncrementVectorTest, NegativeNumbers) {
    vector<int> vec = {-1, -2, -3, -4, -5};
    int n = 3;
    vector<int> expected = {2, 1, 0, -1, -2};
    EXPECT_EQ(incrementVector(vec, n), expected);
}

// Тест 3: Проверка на пустой вектор
TEST(IncrementVectorTest, EmptyVector) {
    vector<int> vec = {};
    int n = 5;
    vector<int> expected = {};
    EXPECT_EQ(incrementVector(vec, n), expected);
}

// Тест 4: Проверка на вектор с нулями
TEST(IncrementVectorTest, Zeroes) {
    vector<int> vec = {0, 0, 0, 0, 0};
    int n = 7;
   vector<int> expected = {7, 7, 7, 7, 7};
    EXPECT_EQ(incrementVector(vec, n), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}