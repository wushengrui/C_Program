#include <stdio.h>
#define N 4
int main(int argc, const char *argv[])
{
    int nums[N] = {0};
	int target;
	int i,j;
	printf("please input target:");
	scanf("%d",&target);
	printf("please input four nums:");
	for(int a = 0; a < N;a++)
	{
		scanf("%d", &nums[a]);
	}
	for (i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
		for (j = i+1; j <sizeof(nums)/sizeof(nums[0]); j++){
			if(nums[i] + nums[j] == target)
			{
				printf("[%d,%d]\n",i , j);
				break;
			}
		}
	}
	return 0;
}

