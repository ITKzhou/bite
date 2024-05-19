#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>



///@Time    :2023_10_21__111期__复杂度讲解

///@Problem : strchr() 
///                                                                          
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
///                异或操作符     找单身狗题型                                                                                                                                   
///****************************************************************************          

//int missingNumber(int* nums, int numsSize) {
//	int i = 0;
//	int sum = 0;
//	for (; i < numsSize; i++) {//不能等于numsSize,避免导致越界访问
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

//时间复杂度：O(N)
//空间复杂度：O(1)

///————————————————————————————————————————————————————————————————————————————  







///@Problem : 轮转数组
///                                                                           
///	https://leetcode.cn/problems/rotate-array/description/ 
/// 给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数 
/// 使用额外的数组                                                                      
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///         数组翻转，整体翻转，再前面翻转，再后面翻转                                                                                                                                             
///****************************************************************************
          
//void swap(int* a, int* b)//交换两个元素
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//void reverse(int* nums, int start, int end)//控制轮转开始结束的位置
//{
//	while (start < end)
//	{
//		swap(&nums[start], &nums[end]);
//		++start;
//		--end;
//	}
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//	k %= numsSize;//确保轮转的元素个数不大于数组长度
//	//对数组轮转，传参开始和结束的下标
//	reverse(nums, 0, numsSize - 1);//轮转整个数组
//	reverse(nums, 0, k - 1);//轮转前面部分
//	reverse(nums, k, numsSize - 1);//轮转后面部分
//
//}
//
//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	rotate(arr, sz, k);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//k=3	[5,6,7,1,2,3,4]
//	}
//	return 0;
//}


/// @Codeing  :  
///                                                                           
///         使用额外的数组                                                                                                                                               
///****************************************************************************          

//void rotate(int* nums, int numsSize, int k)
//{
//	int arr[7] = { 0 };
//
//	//nums 前面的 numsSize - k 个元素从 arr数组下标为 k 的位置开始存放
//	int j = k;
//	for (int i = 0; i < numsSize - k; ++i)//[1,2,3,4,5,6,7]
//	{
//		arr[j++] = nums[i];
//	}
//	//nums 后面的 k 个元素起始下标[numsSize - k]从 arr[0] 的位置开始存放
//	j = 0;
//	for (int i = numsSize - k; i < numsSize; ++i)
//	{
//		arr[j++] = nums[i];
//	}
//	for (int i = 0; i < numsSize; ++i)
//	{
//		nums[i] = arr[i];
//	}
// }
//
//int main()
//{
//	int k = 0;
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	rotate(arr, sz, k);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//k=3	[5,6,7,1,2,3,4]
//	}
//	return 0;
//}

///————————————————————————————————————————————————————————————————————————————  



///@Time    :

///@Problem : 移除元素
///                                                                           
///  https://leetcode.cn/problems/remove-element/description/                                                                          
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///     给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素。
/// 元素的顺序可能发生改变。然后返回 nums 中与 val 不同的元素的数                                                                                                                                                   
///****************************************************************************          







///————————————————————————————————————————————————————————————————————————————  

//输入：nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
//输出：[1, 2, 2, 3, 5, 6]
//解释：需要合并[1, 2, 3] 和[2, 5, 6] 。
//合并结果是[1, 2, 2, 3, 5, 6] ，其中斜体加粗标注的为 nums1 中的元素。

//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int p1 = 0, p2 = 0;
//    int sorted[6] = { 0 };
//    int cur;
//    while (p1 < m || p2 < n) {
//        if (p1 == m) {
//            cur = nums2[p2++];
//        }
//        else if (p2 == n) {
//            cur = nums1[p1++];
//        }
//        else if (nums1[p1] < nums2[p2]) {
//            cur = nums1[p1++];
//        }
//        else {
//            cur = nums2[p2++];
//        }
//        sorted[p1 + p2 - 1] = cur;
//    }
//    for (int i = 0; i != m + n; ++i) {
//        nums1[i] = sorted[i];
//    }
//}
//
//int main()
//{
//    int nums1[] = {1, 2, 3, 0, 0, 0};
//    int nums2[] = {2, 5, 6};
//    int m = 3;
//    int n = 3;
//    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
//    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
//    merge(nums1, nums1Size, m,  nums2, nums2Size,  n);
//    for (int i = 0; i != m + n; ++i) {
//        printf("%d ", nums1[i]);
//    }
//    return 0;
//}


///————————————————————————————————————————————————————————————————————————————  





///@Time    :

///@Problem : 删除有序数组中的重复项
///                                                                           
///     https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/                                                                       
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
///                                                                                                                                                        
///****************************************************************************          

//int removeDuplicates(int* nums, int numsSize) {//[1,1,2]
//
//    int count = 0;//表示不相等元素的个数，还表示数组第一个元素的下标
//    for (int i = 1; i < numsSize; ++i) {//遍历数组，第一次比较是下标0的元素与下标1的元素
//        if (nums[count] != nums[i]) {//不相等时，就把下标1的元素存放到count+1的位置，即下标1的位置
//            //表示当前已确定有一个不相等的元素
//            nums[++count] = nums[i];
//        }
//    }
//    ++count;//[1,2,_]循环结束，count=1,下标从0开始，所以个数count+1
//    return count;//后面那些超出新长度的元素不用考虑
//}
//
//int main(){
//    int arr[] = { 0,0,1,1,1,2,2,3,3,4 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = removeDuplicates(arr, sz);
//    printf("%d\n", ret);//5
//    for (int i = 0; i < ret; i++){
//        printf("%d ", arr[i]);// [0,1,2,3,4]
//    }
//    return 0;
//}
///
///  时间复杂度： O(N)                                                            
///  空间复杂度： O(1) 
                                                            
///————————————————————————————————————————————————————————————————————————————  






///@Time    :

///@Problem : 合并两个有序数组
///                                                                           
///      https://leetcode.cn/problems/merge-sorted-array/description/                                                                      
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
/// 
/// 从后往前遍历两数组，分别取两数组有效元素的最后一个比较大小大的就存放到nums1最后一个元素中                                                                                                                                                                                                                             
///****************************************************************************          

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int end1 = m - 1;//标记nums1有效元素的下标
//    int end2 = n - 1;//标记nums2有效元素的下标，即最后一个元素的下标
//    int index = nums1Size - 1;//标记nums1最后一个元素的下标
//    while (end1 >= 0 && end2 >= 0)
//    {
//        if (nums1[end1] > nums2[end2])
//        {//若nums1[end1]大，就把nums1[end1]存放到nums1最后一个元素的位置
//            nums1[index--] = nums1[end1--];
//        }
//        else
//        {//否则nums2[end2]存放到nums1最后一个元素的位置
//            nums1[index--] = nums2[end2--];
//        }
//    }
//    while (end2 >= 0)
//    {//逻辑与的短路性，若end1 >= 0为假，循环就结束，若nums2中还有元素没有比较
//    //因为是非递减顺序排列，只需把nums2剩余的元素添加到nums1即可
//        nums1[index--] = nums2[end2--];
//    }
//}
//
//int main()
//{
//    int nums1[] = { 2,3,4,0,0,0,0 };
//    int nums2[] = { 1,3,4,5 };
//    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
//    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
//    merge(nums1, nums1Size, 3, nums2, nums2Size, 4);
//    for (int i = 0; i < nums1Size; ++i)
//    {
//        printf("%d ", nums1[i]);//[1，2，3，3，4，4，5]
//    }
//    
//    return 0;
//}

///  时间复杂度： O(m+n)                                                            
///  空间复杂度： O(1)                                                                        

///————————————————————————————————————————————————————————————————————————————  


