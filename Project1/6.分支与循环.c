//分支语句与循环语句
//分支语句（选择语句）
//if
//switch
//循环语句
//while
//for
//do while
//goto
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int age=10;
//	if(age<18)
//	printf("青年人\n");
//	return 0;
//}

//int main()
//{
//	int age= 20;
//	//printf("请输入年纪：\n");
//	//scanf("d%\n",&age);
//	if(age<18)
//		printf("青年人\n");
//	else if(age>=18 && age<=60)
//		printf("壮年人\n");
//	else if(age>60 && age<=90)
//		printf("中年人\n");
//	else//可留可去除
//		printf("老年人\n");
//   return 0;
//}
//int main()
//{
//	int age= 15;
//	//printf("请输入年纪：\n");
//	//scanf("d%\n",&age);
//	if(age<18)
//	{
//		printf("青年人\n");
//	    printf("不能泡妞\n");//控制多条语句时需要用大括号
//	}
//	else
//	{
//	if(age>=18 && age<=60)
//		printf("壮年人\n");
//	else if(age>60 && age<=90)
//		printf("中年人\n");
//    }//代码块
//		return 0;
//}
//int main()
//{
//	int a=0;
//	int b=2;
//	if(1==a)//常量与变量比较，常量放在前面，好的风格
//		{
//			if(b==2)
//		printf("hehehe");
//        }
//	else//else就近if匹配，但可以用大括号
//		printf("hehehe\n");
//	return 0;
//}
//int main()
//{
//	int a=11;
//	if(a/2!=0)
//		printf("偶数\n");
//	else
//	printf("奇数\n");
//	return 0;
//}
//int main()
//{
//	int i=1;
//	while(i<=100)
//		{
//			if(i%2==1)
//	        //if(i%2!=0)
//			printf("%d  ",i);
//			i++;
//	    }
//	return 0;
//}
//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//	printf("%d ",i);
//	i=i+2;
//	i+=2;
//	}
//
//	return 0;
//}
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch (day)//switch (整形)
//	{
//		case 1+0://整形常量表达式1+0
//		printf("星期一");
//		break;
//		case 2:
//		printf("星期二");
//		break;
//		case 3:
//		printf("星期三");
//		break;
//		case 4:
//		printf("星期四");
//		break;
//		case 5:
//		printf("星期五");
//		break;
//		case 6:
//		printf("星期六");
//		break;
//		case 7:
//		printf("星期七");
//		break;
//
//	}
//	return 0;
//}
//int main()
//{
//	int day=0;
//	scanf("%d",&day);
//	switch (day)
//	{
//		case 1:
//			if(day==1)
//				printf("heheh");
//			break;
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日");
//			break;
//		case 6:
//		case 7:
//			printf("休息日");
//			break;
//		default:
//			printf("输入错误");
//			break;
//	}
//	return 0;
//}
//int main ()
//{
//	while(1)//if(1)//while(表达式)
//		printf("hehhe");
//	return 0;
//}
//int main ()
//{
//	int i=1;
//	while(i<=10)
//	{
//		printf("%d ",i);
//		i++;
//	 }
//	return 0;
//}
//int main ()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			break;
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//int main ()
//{
//	int i=1;
//	while(i<=10)
//	{
//		if(i==5)
//			continue;//终止本次循环，后面的代码不进行，回到上面while判断部分
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//int main ()
//{
//	int i=0;
//	while(i<=10)
//	{
//		i++;
//		if(i==5)
//			continue;//终止本次循环，后面的代码不进行，回到上面while判断部分
//		printf("%d ",i);
//	}
//	return 0;
//}
int main()
{
	int ch=0;
	while ((ch=getchar())!=EOF)//ctrl+z=EOF->-1
	{
		putchar(ch);
		printf("%c ",ch );
	}
	return 0;
}