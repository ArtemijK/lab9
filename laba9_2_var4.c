#include<stdio.h>
#include<string.h>

int main(){

char a[] = "If we cannot do as we would we";
char *y;
int i=0;
int n = strlen(a);
y=&a[n-1];

printf("\nNormal view: ");
for(i; i<n; i++){
	printf("%c", a[i]);
}

printf("\nThrough an array:");
for(n-1;n>=0;n--){
	printf("%c", a[n]);
}

n=strlen(a);
printf("\nThrough pointers: ");
i=0;
for(i; i<=n-1; i++){
	printf("%c", *(y-i));
	
}

}