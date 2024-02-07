/*
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

/* Optimal Solution : Dutch National Flag Algorithm (3 pointer approach)
 low,mid,high =>  [0 ... low-1]     -> 0 Leftmost
                  [low ... mid-1]   -> 1
                  [mid ... high]    -> 0/1/2
                  [high+1 ... n-1]  -> 2 Rightmost
*/
#include <stdio.h>

int main()
{
    int nums[] = {2, 0, 2, 1, 1, 0, 1, 0, 1, 2, 0};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int low = 0, mid = 0, high = numsSize - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}

/*
int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 0)
        {
            count1++;
        }
        if (nums[i] == 1)
        {
            count2++;
        }
        if (nums[i] == 2)
        {
            count3++;
        }
    }
    for (int i = 0; i < count1; i++)
    {
        nums[i] = 0;
    }
    for (int i = count1; i < count1 + count2; i++)
    {
        nums[i] = 1;
    }
    for (int i = count1 + count2; i < numsSize; i++)
    {
        nums[i] = 2;
    }
*/