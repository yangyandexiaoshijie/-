//��֧�����ѭ�����
//��֧��䣨ѡ����䣩
//if
//switch
//ѭ�����
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
//	printf("������\n");
//	return 0;
//}

//int main()
//{
//	int age= 20;
//	//printf("��������ͣ�\n");
//	//scanf("d%\n",&age);
//	if(age<18)
//		printf("������\n");
//	else if(age>=18 && age<=60)
//		printf("׳����\n");
//	else if(age>60 && age<=90)
//		printf("������\n");
//	else//������ȥ��
//		printf("������\n");
//   return 0;
//}
//int main()
//{
//	int age= 15;
//	//printf("��������ͣ�\n");
//	//scanf("d%\n",&age);
//	if(age<18)
//	{
//		printf("������\n");
//	    printf("�������\n");//���ƶ������ʱ��Ҫ�ô�����
//	}
//	else
//	{
//	if(age>=18 && age<=60)
//		printf("׳����\n");
//	else if(age>60 && age<=90)
//		printf("������\n");
//    }//�����
//		return 0;
//}
//int main()
//{
//	int a=0;
//	int b=2;
//	if(1==a)//����������Ƚϣ���������ǰ�棬�õķ��
//		{
//			if(b==2)
//		printf("hehehe");
//        }
//	else//else�ͽ�ifƥ�䣬�������ô�����
//		printf("hehehe\n");
//	return 0;
//}
//int main()
//{
//	int a=11;
//	if(a/2!=0)
//		printf("ż��\n");
//	else
//	printf("����\n");
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
//	switch (day)//switch (����)
//	{
//		case 1+0://���γ������ʽ1+0
//		printf("����һ");
//		break;
//		case 2:
//		printf("���ڶ�");
//		break;
//		case 3:
//		printf("������");
//		break;
//		case 4:
//		printf("������");
//		break;
//		case 5:
//		printf("������");
//		break;
//		case 6:
//		printf("������");
//		break;
//		case 7:
//		printf("������");
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
//			printf("������");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��");
//			break;
//		default:
//			printf("�������");
//			break;
//	}
//	return 0;
//}
//int main ()
//{
//	while(1)//if(1)//while(���ʽ)
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
//			continue;//��ֹ����ѭ��������Ĵ��벻���У��ص�����while�жϲ���
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
//			continue;//��ֹ����ѭ��������Ĵ��벻���У��ص�����while�жϲ���
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