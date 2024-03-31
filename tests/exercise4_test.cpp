#include <excercises.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();

  exercise_4(5);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "120\n");
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();

  exercise_4(1);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "1\n");
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();

  exercise_4(10);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "3628800\n");
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();

  exercise_4(12);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "479001600\n");
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();

  exercise_4(-15);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "El numero es negativo. Intentelo de nuevo\n");
}

TEST(Test6, TestExample6) {
  testing::internal::CaptureStdout();

  exercise_4(20);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "El numero es muy grande. Intentelo de nuevo\n");
}

TEST(Test7, TestExample7) {
  testing::internal::CaptureStdout();

  exercise_4(0);

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, "1\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}