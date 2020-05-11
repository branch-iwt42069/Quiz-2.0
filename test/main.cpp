#define CTEST_MAIN
#include <ctest.h>
#include "funcAnswer.h"


CTEST(funcAnswer, correct_answer)
{
	char answer = '1';
	char a = '4';
	char b = '2';
	char c = '3';
	char d = '1';
	ASSERT_EQUAL(1, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, wrong_answer)
{
	char answer = '1';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(0, funcAnswer(answer, a, b, c, d));
}


CTEST(funcAnswer, an_invalid_response1)
{
	char answer = '6';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, an_invalid_response2)
{
	char answer = 'g';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, an_invalid_response3)
{
	char answer = '!';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}

CTEST(funcAnswer, an_invalid_response4)
{
	char answer = '0';
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	ASSERT_EQUAL(2, funcAnswer(answer, a, b, c, d));
}
