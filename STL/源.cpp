//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	char a[18] = " ";
//	char b[] = "lixuhui\0 hahaha";
//	strcpy(a, b);/* 以\0为结束符完成拷贝 */
//	//swap(a, b);/* swap交换是以字节数为变量交换的 */
//	string s1 = " ";
//
//	string s2 = "lixuhui  hahaha";
//	swap(s1, s2);/* 模板函数 */
//	for (auto &i : s1)
//	{
//		cout << i;
//	}
//	/*for (int i=0;i<18;++i)
//	{
//		cout << a[i];
//	}*/
//
//	//cout << a << endl;
//	
//	system("pause");
//	return 0;
//}
///*
////strchr example 
//
//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//  char str[] = "This is a sample string";
//  char * pch;
//  printf ("Looking for the 's' character in \"%s\"...\n",str);
//  pch=strchr(str,'s');
//  while (pch!=NULL)
//  {
//	printf ("found at %d\n",pch-str+1);
//	pch=strchr(pch+1,'s');
//  }
//  return 0;
//}
// found at 4found at 7found at 11found at 18*/
///* 
//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//  int n;
//  puts ("Looking for R2 astromech droids...");
//  for (n=0 ; n<3 ; n++)
//	if (strncmp (str[n],"R2xx",2) == 0)
//	{
//	  printf ("found %s\n",str[n]);
//	}
//  return 0;
//}
//Looking for R2 astromech droids...found R2D2found R2A6*/
///* 
//#include <string>
//using namespace std;
//
//int main ()
//{
//  char * cstr, *p;
//
//  string str ("Please split this phrase into tokens");
//
//  cstr = new char [str.size()+1];
//  strcpy (cstr, str.c_str());
//
//  // cstr now contains a c-string copy of str
//
//  p=strtok (cstr," ");
//  while (p!=NULL)
//  {
//	cout << p << endl;;
//	p=strtok(NULL," ");
//  }
//
//  delete[] cstr;
//  return 0;
//}
//
//
//Output:
//Pleasesplitthisphraseintotokens
//
//*/