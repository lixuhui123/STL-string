//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char s[10000], ss[10000];
//int a[10000], b[10000], c[10000];
////int len，lenn;
//
///*-------------高精度乘法（高）--------------*/
//
//void cheng_gao()     //高是指高精度乘高精度 
//{
//	int len = strlen(s);
//	int lenn = strlen(ss);
//	memset(a, 0, sizeof(a));   //清零数组
//	memset(b, 0, sizeof(b));
//	memset(c, 0, sizeof(c));
//	for (int i = 0; i < len; i++)
//		a[len - i - 1] = s[i] - '0';    //将字符串转化为数组 
//	for (int i = 0; i < lenn; i++)
//		b[lenn - i - 1] = ss[i] - '0'; 
//	for (int i = 0; i < len; i++)
//		for (int j = 0; j < lenn; j++)
//			c[i + j] += a[i] * b[j];       
//	//运算（符合乘法规则，将加法竖式当中的数全部合并） 
//	int l = len + lenn - 1;    //l是结果的最高位数 
//
//	/* 进位 */
//	for (int i = 0; i < l; i++)
//	{
//		c[i + 1] += c[i] / 10;    //保证每一位的数都只有一位(个位)，并进位 
//		c[i] %= 10;
//	}
//	if (c[l] > 0) l++;     //保证最高位数，确保输出时不会忽略向最高位的进位
//	/*while (c[l - 1] >= 10)
//	{
//		c[l] = c[l - 1] / 10;
//		c[l - 1] %= 10;
//		l++;
//	}*/
//	while (c[l - 1] == 0 && l > 1)
//		l--;    //while去零法，确保当输入开头有0在输出的时候影响数位。
//	printf("结果：\n");
//	printf("%s × %s = ", s, ss);
//	for (int i = l - 1; i >= 0; i--)    //输出结果 ，数组下标从0开始
//		printf("%d", c[i]);
//	printf("\n");     //换行 
//}                                
//
//void print()  //输出函数 
//{
//	printf("高精度乘法（高）(By STY)\n\n");
//	 
//	printf("请输入两个数字：\n");
//	printf("数字：(用空格隔开)\n");
//}
//
//int main()
//{
//	print();
//	while (scanf("%s%s", s, ss) !=EOF )
//	{
//		printf("\n结果：\n");
//		cheng_gao();    //引用高精度乘法函数
//		printf("\n\n");
//		print();
//	}
//	system("pause");
//	return 0;
//}
//
