

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    for(int m=0; m<numsSize; m++)
        {
            for(int n=m+1; n<numsSize; n++)
            {
                if(nums[m]+nums[n]==target)
                {
                    int* size[2];
                   size[0]=m;size[1]=n;
                   *returnSize = 2;
                return ret;
                }

        }
    }

    return returnSize;
}
