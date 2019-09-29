//#include <iostream>
//using namespace std;
//void reverseString(char* s, int sSize) 
//{
//	if (!s)
//	{
//		return;
//	}
//	int left = 0, right = sSize - 1;
//	for (;left<right;left++,right--)
//	{
//		char tmp;
//		tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//	}
//}
//int main()
//{
//	char str[4] = "abc";
//	reverseString(str, 3);
//	for (int i=0;i<3;++i)
//	{
//		printf("%c", str[i]);
//	}
//	system("pause"); 
//	return 0;
//}