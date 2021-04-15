#include"../unity/unity.h"
#include"../unity/unity_internals.h"
#include"../inc/worldtime.h"
#include"../inc/currency.h"
/* Required by the unity test framework */
void setUp(void)
{
}
/* Required by the unity test framework */
void tearDown(void)
{
}
void test_should_convert(void){
    float rupee=204.2;
    TEST_ASSERT_EQUAL(10,currency(2,&rupee));
    float rupee1=225;
    TEST_ASSERT_EQUAL(3,currency(6,&rupee1));
    float rupee2=69;
    TEST_ASSERT_EQUAL(100,currency(8,&rupee2));
    float rupee3=20.60;
    TEST_ASSERT_EQUAL(4,currency(11,&rupee3));
    float rupee4=67;
    TEST_ASSERT_EQUAL(1000,currency(19,&rupee4));
}
int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_should_convert);
return UNITY_END();
}
