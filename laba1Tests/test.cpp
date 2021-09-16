#include "pch.h"
#include"..\laba1b\Header.h"
using namespace Prog;
TEST(CisoidaDioklaConstructors, Get) {
	CisoidaDiokla Krivaya(5,6,7);
	EXPECT_EQ(5, Krivaya.x);
	EXPECT_EQ(6, Krivaya.a);
	EXPECT_EQ(7, Krivaya.ygol);
}
TEST(CisoidaDioklaMetods, dot) {
	CisoidaDiokla Krivaya(0, 2, 60);
	EXPECT_EQ(-2, Krivaya.printypox());
	EXPECT_EQ(-2, Krivaya.printkoef());
	ASSERT_FLOAT_EQ(-2, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(-2, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(-2, Krivaya.printobem());
}
TEST(CisoidaDioklaMetods, Exeption_in_printypox) {
	CisoidaDiokla Krivaya(10, 7, 3);
	EXPECT_EQ(-1, Krivaya.printypox());
	EXPECT_EQ(2, Krivaya.printkoef());
	ASSERT_DOUBLE_EQ(3 * PI * 3.5 * 3.5, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(2 * PI * PI * 3.5 * 3.5 * 3.5, Krivaya.printobem());
}
TEST(CisoidaDioklaMetods, Exeption_in_printobem) {
	CisoidaDiokla Krivaya(10, 20, 3);
	EXPECT_EQ(10, Krivaya.printypox());
	ASSERT_EQ(-1, Krivaya.printobem());
}

TEST(CisoidaDioklaMetods, UsualTest_1) {
	CisoidaDiokla Krivaya(8, 2, 60);
	EXPECT_EQ(-1, Krivaya.printypox());
	EXPECT_EQ(2, Krivaya.printkoef());
	ASSERT_NEAR(2 * sin(60 * PI / 180) * sin(60 * PI / 180) / cos(60 * PI / 180), Krivaya.rastdochentra(),0.01);
	ASSERT_DOUBLE_EQ(3 * PI * 1 * 1, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(2 * PI * PI * 1 * 1 * 1, Krivaya.printobem());
}
TEST(CisoidaDioklaMetods, UsualTest_2) {
	CisoidaDiokla Krivaya(0, -3, 0);
	EXPECT_EQ(-2, Krivaya.printypox());
	EXPECT_EQ(-2, Krivaya.printkoef());
	ASSERT_FLOAT_EQ(-2, Krivaya.rastdochentra());
	ASSERT_DOUBLE_EQ(-2, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(-2, Krivaya.printobem());
}
TEST(CisoidaDioklaMetods, UsualTest_3) {
	CisoidaDiokla Krivaya(8, 77, 60);
	EXPECT_NEAR(sqrt(8 * 8 * 8 / (77 - 8)), Krivaya.printypox(),0.1);
	EXPECT_EQ(2, Krivaya.printkoef());
	ASSERT_NEAR(77 * sin(60 * PI / 180) * sin(60 * PI / 180) / cos(60 * PI / 180), Krivaya.rastdochentra(),0.01);
	ASSERT_DOUBLE_EQ(3 * PI * 38.5 * 38.5, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(2 * PI * PI * 38.5 * 38.5 * 38.5, Krivaya.printobem());
}
TEST(CisoidaDioklaMetods, UsualTest_4) {
	CisoidaDiokla Krivaya(40, 44, 55);
	EXPECT_FLOAT_EQ(sqrt(40 * 40 * 40 / (44 - 40)), Krivaya.printypox());
	EXPECT_EQ(2, Krivaya.printkoef());
	ASSERT_NEAR(44 * sin(55 * PI / 180) * sin(55 * PI / 180) / cos(55 * PI / 180), Krivaya.rastdochentra(),0.01);
	ASSERT_DOUBLE_EQ(3 * PI * 22 * 22, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(2 * PI * PI * 22 * 22 * 22, Krivaya.printobem());
}
TEST(CisoidaDioklaMetods, UsualTest_5) {
	CisoidaDiokla Krivaya(-7, 3, 10);
	EXPECT_EQ(-1, Krivaya.printypox());
	EXPECT_EQ(2, Krivaya.printkoef());
	ASSERT_NEAR(3 * sin(10 * PI / 180) * sin(10 * PI / 180) / cos(10 * PI / 180), Krivaya.rastdochentra(),0.01);
	ASSERT_DOUBLE_EQ(3 * PI * 1.5 * 1.5, Krivaya.printploshad());
	ASSERT_DOUBLE_EQ(2 * PI * PI * 1.5 * 1.5 * 1.5, Krivaya.printobem());
}