// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>
#include <time.h>
#include<iostream>
#include <cstdlib>
using namespace std;
void DateFormat(const char*src,char*dest);
char *s="I am a student.";
void convertStr(char*str,int a,int b)
{
	for(int i=a,j=0;i<=(a+b)/2;i++)
	{
		char temp=str[i];
		str[i]=str[b-j];
		str[b-j++]=temp;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	char ch[]="file.trs.ok";
	const char* tch=strrchr(ch,'.');
	int a=2;
	return 0;
}

void DateFormat(const char*src,char*dest)
{
	if(src[4]=='-')//已格式化好
	{
		for(int i=0;;i++)
		{
			dest[i]=src[i];
			if(src[i]=='\0')
				return;
		}
	}
	if(src[14]!='\0')
		cout<<"格式错误"<<endl;
	int j=0;
	for(int i=0;src[i]!='\0';i++)
	{
		if(src[i]>'9'||src[i]<'0')
		{
			cout<<"格式错误"<<endl;
		}
		dest[j++]=src[i];
		if(i==3||i==5)
			dest[j++]='-';
		else if(i==7)
			dest[j++]=' ';
		else if(i==9||i==11)
			dest[j++]=':';
	}
	dest[j]='\0';
}
