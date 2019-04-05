/*************************************************
Function: myStycmp
Description: 
Input: char * src - The first string you want to compare with;
		char * dest - The second string you want to compare with;
Return: flag. 
		if flag is equal to 0, it indicates that the src is equal to the dest;
		if flag is equal to 1, it indicates that the src is greater than the dest;
		if flag is equal to -1, it indicates that the src is less than the dest.
Others: Comparison is done byte by byte; 
*************************************************/


#include <stdio.h>

//int myStrcmp(char * src,char * dest)
//{
//	int flag = 0; //The varible of flag is a sign. 
//	while(1)
//	{
//		if(*src - *dest>0){
//			flag = 1;
//			break;
//		}
//		else if(*src - *dest<0){
//			flag = -1;
//			break;
//		}
//		else{
//			src++;
//			dest++;
//			if(!*src){
//				break;
//			}
//		}
//	}
//	
//	return flag;
//}

//int myStrcmp(char * src, char * dest){
//	int flag = 0;
//	while (*src - *dest == 0 && *src){
//		src++,dest++;
//	}
//	if(*src - *dest>0){
//		flag = 1;
//	}
//	else if(*src - *dest<0){
//		flag = -1;
//	}
//	
//	return flag;
//} 

int myStrcmp(char * src, char * dest){
	int flag = 0;
	while (flag = *src - *dest == 0 && *src){
		src++,dest++;
	}
	if(flag>0){
		flag = 1;
	}
	else if(flag<0){
		flag = -1;
	}
	
	return flag;
} 

