#include <stdio.h>
#include <string.h>

void swap(char v[], int left, int right){
if(left>=right)
		return;
char tmp;
tmp = v[left];
v[left] = v[right];
v[right] = tmp;
left++;
swap(v, left, strlen(v)-left-1);
}

void reverse(char s[]){
swap(s,0,strlen(s)-1);
}
main(){
char s[] = "hello";
reverse(s);
printf("%s",s);
}
