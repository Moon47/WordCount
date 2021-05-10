#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{	
    if(argc == 3){
	    char a1[100];
    	char a2[100];
		strcpy(a2,argv[2]);
		strcpy(a1,argv[1]);
		FILE *fp;		
		int str=0,word=0;		
		char ch;		
		if((fp=fopen(a2,"r"))==NULL)		
		{			
		printf("没有检测到文件\n");			
		return 0;		
		}		
		ch=fgetc(fp); 					
		
		char t = ch;		
		while(ch!=EOF)		
		{
			if((ch==' ' || ch==',' || ch=='\n')&&(t!=' ' && t!=',' && t!='\n'))			
			{				
			word++;			
			}			
			str++;			
			t=ch;			
			ch=fgetc(fp);		
			}		
			if(t!=' ' && t!= ',' && t!='\n')			
			word++;		
			if(a1[1]=='c'){			
			printf("字符数:%d\n",str);		
			}else if(a1[1]=='w'){			
			printf("单词数:%d\n",word);		
			}else{			
			printf("输入错误\n"); 		
			} 		
			fclose(fp);		
			}	
			else{		
			printf("请输入三个参数\n");	
			}	
			return 0;
			}

