#include <stdio.h>
#include <stdlib.h>

int binarysearch(int* , int, int);
/* param: input the goal in command line */
main(int argv, char *args[]){
int a[]={1,2,5,6,8};
int goal =  atoi(args[1]);
int len = sizeof a / sizeof a[0];
int result = binarysearch(a, len, goal);
printf("%d\n",goal);
printf("%d",result);
}

int binarysearch(int *arr, int len, int goal){
int low=0;
int high=len-1;
int mid;
while(low<high){
mid = (low+high)/2;
if(arr[mid]>goal){
high = mid;
}
else if(arr[mid]<goal){
low = mid+1;
}
else
	return mid;
}
return -1;
}
