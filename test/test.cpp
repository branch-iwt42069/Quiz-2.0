#include <gtest/gtest.h>
#include "../headers/design.h"

using namespace std;
  
TEST(CheckAnswer, Answer1){
	readBase();
	short questionNumbers[20];
	*questionNumbers=massive();
    EXPECT_EQ(checkAnswer(0, 1), 1);
}
TEST(CheckAnswer,Answer2){
short questionNumbers1[20];
    
    *questionNumbers1 = massive();
EXPECT_EQ(checkAnswer( 1, 3), 1 );

}
TEST(CheckAnswer,Answer3){
short questionNumbers3[20];
    
    *questionNumbers3 = massive();
EXPECT_EQ(checkAnswer( 2, 1), 1 );

}
TEST(CheckAnswer,Answer4){
short questionNumbers4[20];
    
    *questionNumbers4 = massive();
EXPECT_EQ(checkAnswer( 3, 3), 1 );

}
TEST(CheckAnswer,Answer5){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 4, 3), 1 );

}
TEST(CheckAnswer,Answer6){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 5, 4), 1 );

}
TEST(CheckAnswer,Answer7){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 6, 1), 1 );

}
TEST(CheckAnswer,Answer8){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 7, 2), 1 );

}
TEST(CheckAnswer,Answer9){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 8, 1), 1 );

}
TEST(CheckAnswer,Answer10){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 9, 1), 1 );

}
TEST(CheckAnswer,Answer11){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 10, 2), 1 );

}
TEST(CheckAnswer,Answer12){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 11, 2), 1 );

}
TEST(CheckAnswer,Answer13){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 12, 2), 1 );

}
TEST(CheckAnswer,Answer14){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 13, 1), 1 );

}
TEST(CheckAnswer,Answer15){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 14, 1), 1 );

}
TEST(CheckAnswer,Answer16){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 15, 1), 1 );

}
TEST(CheckAnswer,Answer17){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 16, 4), 1 );

}
TEST(CheckAnswer,Answer18){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 17, 2), 1 );

}
TEST(CheckAnswer,Answer19){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 18, 4), 1 );

}
TEST(CheckAnswer,Answer20){
short questionNumbers[20];
    
    *questionNumbers = massive();
EXPECT_EQ(checkAnswer( 19, 1), 1 );
}
