#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "string.h"

int my_strlen(char *s){
	int count=0;
	while(*(s+count) != '\0'){
		count++;
	}
	return count;
}

int str2upper(char *s){
	//assert(s != NULL);
	int l = my_strlen(s);
	int count=0;
	int i=0;
	for(i=0;i<l;i++){
		if(s[i]<='z'&&s[i]>='a'){
			s[i]=s[i]+32;
			count++;
		}
	}
	return count;
}

int str2lower_(char *s){
	assert(s != NULL);
	int l = my_strlen(s);
	int count=0;
	int i=0;
	for(i=0;i<l;i++){
		if(*(s+i)<='Z'&&*(s+i)>='A') count++;
	}
	return count;
}

int str_strip_numbers(char *s){
	int i=0;
	int j=0;
	int count=0;
	int len=my_strlen(s);
	while(s[i]!='\0'){
		if(s[i]>'9'||s[i]<'0')
		count++;
		s[j++]=s[i];
		i++;
	}
	s[j]='\0';
	return count;
}

void mystrcpy(char *s,char *d){
	int i=0;
	int j=0;
	int len=my_strlen(s);
	for(i=0;i<len;i++){
		*(d+j)=*(s+i);
		j++;
	}
	d[i]='\0';
}

int mystrcmp(char *s,char *d){
	int i=0;
	while(*(s+i)==*(d+i)&&*(s+i)!='\0'&&*(d+i)!='\0')
	i++;
	if(*(s+i)>*(d+i))
	return i+1;

	else if(*(s+i)<*(d+i))
	return -(i+1);

	else
	return 0;
}

char* strdupl(char *s){
	int i;
	char *a;
	a=(char*)malloc(sizeof(char)*100);
	for(i=0;i<100;i++){
		*(a+i)=*(s+i);
		if(*(s+i)=='\0')break;
	}
	return a;
}

