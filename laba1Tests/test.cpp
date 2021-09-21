#include <iostream>
#include "gtest/gtest.h"
#include <cmath>
#include "../StaticLib1/cisoidadiokla.h"


TEST(CisoidaDioklaConstructors, Get) 
{
	CisoidaDiokla Krivaya(5,6,7);
	EXPECT_FLOAT_EQ(5, Krivaya.getx());
	EXPECT_FLOAT_EQ(6, Krivaya.geta());
	EXPECT_FLOAT_EQ(7, Krivaya.getangle());
}

TEST(CisoidaDioklaMetods, UsualTest_1) {
	CisoidaDiokla Krivaya(2, 8, 60);
	EXPECT_FLOAT_EQ(sqrt(pow(2, 3) / (8 - 2)), Krivaya.printypox());
	EXPECT_FLOAT_EQ(2*2, Krivaya.printkoef());
	EXPECT_NEAR(8 * pow(sin(60 * PI / 180),2) / cos(60 * PI / 180), Krivaya.rastdochentra(),0.001);
	EXPECT_DOUBLE_EQ(3 * PI * 4 * 4, Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI,2) * pow(4,3), Krivaya.printvolume());
	EXPECT_DOUBLE_EQ(2 * pow(PI, 2) * pow(4, 3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta()/2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_2) {
	CisoidaDiokla Krivaya(-2, -3, 0);
	EXPECT_NEAR(sqrt(-2 * -2 * -2 / (-3 + 2)), Krivaya.printypox(), 0.1);
	EXPECT_FLOAT_EQ(-2 * 2, Krivaya.printkoef());
	EXPECT_NEAR(-3 * pow(sin(0 * PI / 180), 2) / cos(0 * PI / 180), Krivaya.rastdochentra(), 0.001);
	EXPECT_DOUBLE_EQ(3 * PI * pow(-1.5, 2), Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI, 2) * pow(-1.5, 3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_3) {
	CisoidaDiokla Krivaya(8, 77, 60);
	EXPECT_NEAR(sqrt(8 * 8 * 8 / (77 - 8)), Krivaya.printypox(),0.1);
	EXPECT_FLOAT_EQ(8*2, Krivaya.printkoef());
	EXPECT_NEAR(77 * pow(sin(60 * PI / 180),2) / cos(60 * PI / 180), Krivaya.rastdochentra(),0.001);
	EXPECT_DOUBLE_EQ(3 * PI * pow(38.5,2), Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI,2)* pow(38.5,3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_4) {
	CisoidaDiokla Krivaya(40, 44, 55);
	EXPECT_FLOAT_EQ(sqrt(pow(40,3) / (44 - 40)), Krivaya.printypox());
	EXPECT_FLOAT_EQ(2*40, Krivaya.printkoef());
	EXPECT_NEAR(44 * pow(sin(55 * PI / 180),2) / cos(55 * PI / 180), Krivaya.rastdochentra(),0.001);
	EXPECT_DOUBLE_EQ(3 * PI * pow(22,2), Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI,2) * pow(22,3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_5) {
	CisoidaDiokla Krivaya(7, 33, 10);
	EXPECT_FLOAT_EQ(sqrt(pow(7, 3) / (33 - 7)), Krivaya.printypox());
	EXPECT_FLOAT_EQ(7*2, Krivaya.printkoef());
	ASSERT_NEAR(33 * pow(sin(10 * PI / 180),2) / cos(10 * PI / 180), Krivaya.rastdochentra(),0.001);
	ASSERT_DOUBLE_EQ(3 * PI * pow(16.5,2), Krivaya.printsquare());
	ASSERT_DOUBLE_EQ(2 * pow(PI,2) * pow(16.5,3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_6) {
	CisoidaDiokla Krivaya(1, 10, 32);
	EXPECT_FLOAT_EQ(sqrt(pow(1, 3) / (10 - 1)), Krivaya.printypox());
	EXPECT_FLOAT_EQ(1*2, Krivaya.printkoef());
	EXPECT_NEAR(10 * pow(sin(32 * PI / 180), 2) / cos(32 * PI / 180), Krivaya.rastdochentra(), 0.001);
	EXPECT_DOUBLE_EQ(3 * PI * pow(5, 2), Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI, 2) * pow(5, 3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_7) {
	CisoidaDiokla Krivaya(73, 200, 5);
	EXPECT_FLOAT_EQ(sqrt(pow(73, 3) / (200  -73)), Krivaya.printypox());
	EXPECT_FLOAT_EQ(73*2, Krivaya.printkoef());
	EXPECT_NEAR(200 * pow(sin(5 * PI / 180), 2) / cos(5 * PI / 180), Krivaya.rastdochentra(), 0.001);
	EXPECT_DOUBLE_EQ(3 * PI * pow(100, 2), Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI, 2) * pow(100, 3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
TEST(CisoidaDioklaMetods, UsualTest_8) {
	CisoidaDiokla Krivaya(4, 29, 35);
	EXPECT_FLOAT_EQ(sqrt(pow(4, 3) / (29 - 4)), Krivaya.printypox());
	EXPECT_FLOAT_EQ(4*2, Krivaya.printkoef());
	EXPECT_NEAR(29 * pow(sin(35 * PI / 180), 2) / cos(35 * PI / 180), Krivaya.rastdochentra(), 0.001);
	EXPECT_DOUBLE_EQ(3 * PI * pow(14.5, 2), Krivaya.printsquare());
	EXPECT_DOUBLE_EQ(2 * pow(PI, 2) * pow(14.5, 3), Krivaya.printvolume());
	EXPECT_FLOAT_EQ(2 * (Krivaya.geta() / 2), Krivaya.printparabolickoef());
}
