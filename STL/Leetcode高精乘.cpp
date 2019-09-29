//#include <iostream>
//#include <string>
//using namespace std;
//class Solution {
//public:
//	string multiply(string num1, string num2) 
//	{
//		int n1[10000];
//		int n2[10000];
//		int c[10000];
//		memset(n1, 0, sizeof(n1));
//		memset(n2, 0, sizeof(n2));
//		memset(c, 0, sizeof(c));
//		/* 将字符类逆序转换成数字 */
//		int len = num1.length();
//		int lenn = num2.length();
//		for (int i=0;i<len;++i)
//		{
//			n1[len - i - 1] = num1[i]-'0';
//		}
//		for (int i=0;i<lenn;++i)
//		{
//			n2[lenn - i - 1] = num2[i] - '0';
//		}
//		/* 高精乘的算法核心 */
//		for (int i=0;i<len;++i)
//		{
//			for (int j=0;j<lenn;++j)
//			{
//				c[i + j] += n1[i] * n2[j];
//			}
//		}
//		/* 计算数位 */
//		int wei = len + lenn - 1;
//		/* 进位 */
//		for (int i=0;i<wei;++i)
//		{
//			c[i + 1] += c[i] / 10;/* 进位 */
//			c[i] %= 10;
//		}
//		/*  */
//		if (c[wei]>0)
//		{
//			wei++;//保证最高位数，确保输出时不会忽略向最高位的进位
//		}
//        while (c[wei-1]==0&&wei>1)
//        {
//        	wei--;//while去零法，确保当输入开头有0在输出的时候影响数位。
//        }
//		/* 输出 */
//		string tmp;
//		for (int i=wei-1;i>=0;--i)
//		{
//			cout << c[i];
//			tmp.push_back(c[i]+'0');
//		}
//		 
//		return tmp;
//	}
//};
//int main()
//{
//	Solution test;
//	string tmp;
//	tmp=test.multiply("123", "456");
//	cout << tmp;
//	//string tmp = "123123";
//	//cout << tmp;
//	system("pause"); 
//	return 0;
//}