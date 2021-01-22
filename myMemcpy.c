#include <stdio.h>


void myMemcpy(void *distSrc, const void *sourSrc, size_t len)
{
    // cout << (int *)distSrc << " | " << (int *)sourSrc << endl;
    // cout << (int *)distSrc+len << " | " << (int *)sourSrc+len << endl;
	// cout << (char *)distSrc-(char *)sourSrc <<  " | " << len << endl;
	LOGD("%p\n", (int *)distSrc);
	printf("%p\n", (int *)distSrc);
	printf("%p\n", (int *)sourSrc);
}



int main()
{
	int a;
    int c,d;
	int e[2];
    char b[9];
    myMemcpy((void*)&a, (const void*)b, 4);
	return 0;
}