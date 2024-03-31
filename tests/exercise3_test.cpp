#include <excercises.h>
#include <gtest/gtest.h>

TEST(Test1, TestExample1) {
  testing::internal::CaptureStdout();
  std::string expected =
      "Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n";

  exercise_3("1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test2, TestExample2) {
  testing::internal::CaptureStdout();
  std::string expected =
      "Om-nom-nom :P\n\
Om-nom-nom :P\n\
Om-nom-nom :P\n\
No cake :(\n";

  exercise_3("1 1 1 0 0 0 0 0 1 1");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test3, TestExample3) {
  testing::internal::CaptureStdout();
  std::string expected =
      "No cake :(\n";

  exercise_3("0");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test4, TestExample4) {
  testing::internal::CaptureStdout();
  std::string expected =
      "Om-nom-nom :P\n";

  exercise_3("1");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test5, TestExample5) {
  testing::internal::CaptureStdout();
  std::string expected =
      "No cake :(\n";

  exercise_3("0 1 1 1 1 1 1 1 1 1");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

TEST(Test6, TestExample6) {
  testing::internal::CaptureStdout();
  std::string expected =
      "";

  exercise_3("");

  std::string YOUR_OUTPUT = testing::internal::GetCapturedStdout();
  ASSERT_EQ(YOUR_OUTPUT, expected);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}