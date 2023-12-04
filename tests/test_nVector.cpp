#include <gtest/gtest.h>
#include "Math/nVector.h"

TEST(VectorTest, Declaration_size)
{
    NVector<int, 1> test_i_1;
    ASSERT_EQ(test_i_1.GetSize(), 1);

    NVector<float, 1> test_f_1;
    ASSERT_EQ(test_f_1.GetSize(), 1);
    
    NVector<int, 2> test_i_2;
    ASSERT_EQ(test_i_2.GetSize(), 2);
    
    NVector<float, 2> test_f_2;
    ASSERT_EQ(test_f_2.GetSize(), 2);
    
    NVector<int, 3> test_i_3;
    ASSERT_EQ(test_i_3.GetSize(), 3);

    NVector<float, 3> test_f_3;
    ASSERT_EQ(test_f_3.GetSize(), 3);

    NVector<int, 4> test_i_4;
    ASSERT_EQ(test_i_4.GetSize(), 4);

    NVector<float, 4> test_f_4;
    ASSERT_EQ(test_f_4.GetSize(), 4);
    
}

TEST(VectorTest, Set_and_Get)
{
    NVector<int, 1> test_i_1;
    test_i_1[0] = 99;
    ASSERT_EQ(test_i_1[0], 99);

    NVector<float, 1> test_f_1;
    test_f_1[0] = 0.5f;
    ASSERT_EQ(test_f_1[0] ,0.5f);

    ASSERT_THROW(test_i_1[1], std::out_of_range);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}