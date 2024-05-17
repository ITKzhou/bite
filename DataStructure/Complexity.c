#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>



///@Time    :2023_10_21__111期__复杂度讲解

///@Problem : 
///            strchr()                                                               
///         查找字符串中第一个出现的字符                                                                   
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///   const char* strchr ( const char* str, int character );
///			char* strchr (       char* str, int character);                                                                                                                                                    
///****************************************************************************

//const char* my_strchr(const char* str, char ch)
//{
//	assert(str);
//	while (*str)//遍历字符串，不等于'\0'
//	{
//		if (*str == ch)//如果相等，返回str指向的第一个ch出现的地址
//		{
//			return str;
//		}
//		str++;//否则指针加1，继续遍历
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* str = "abcdef";
//	char ch;
//	scanf("%c", &ch);
//	char* ret = my_strchr(str, ch);
//	if (ret != NULL)
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  



///@Time    :

///@Problem : [面试题 17.04. 消失的数字]
///          
///                                                                  
/// (https://leetcode.cn/problems/////missing-number-lcci/description/)                                                                           
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///    数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数                                                                                                                                                    
///****************************************************************************          

//时间复杂度：O(N)
//
//int missingNumber(int* nums, int numsSize) {
//	int i = 0;
//	int sum = 0;
//	for (; i < numsSize; i++) {//避免等于numsSize,会导致越界访问
//		sum ^= i;//遍历数组，下标异或累积在，再与数组元素异或累积
//		sum ^= nums[i];
//	}
//	return sum ^ numsSize;
//}
//int main()
//{
//	int nums[10] = { 0,2,3,4,5,6,1,8,9 };
//	printf("%d\n", missingNumber(nums, 9));
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  









