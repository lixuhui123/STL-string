#pragma once
/* �Լ�ʵ�ֵ�string�� */
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define COUNTCAPA(size) (size / CAPACITY + 1)*CAPACITY/* Ҫ���ٵĿռ��С */
#define CAPACITY 16
class String
{
	char *m_data;
	size_t m_size;
	size_t m_capacity;
public:
	String(const char* str = "") :
		m_capacity(CAPACITY), m_size(0)/* ��ʼ���б� */
	{
		if (str==nullptr)
		{
			m_size = 0;
		}
		else
		{
			m_size = strlen(str);/* ���� */
		}
		
		m_data = new char[m_capacity];
		/*��Ⲣ�ҷ���  */
		reserve(m_size);
		strncpy(m_data, str, m_size);
	}
	String(String &s)
	{
		/* ����һ��������ʼ�� */
		m_capacity = s.m_capacity;
		m_size = s.m_size;
		m_data = new char[m_capacity];/* ��� */
		//strcpy(m_data, s.m_data);/* ����\0Ϊ��������ɿ��� */
		strncpy(m_data, s.m_data, s.m_size);
		//swap(m_data, s.m_data);/* ��\0Ϊ��������ɿ��� */
	}
	String(size_t n, char ch):m_size(n),m_capacity(CAPACITY)
	{
		
		m_data = new char[m_capacity];
		reserve(m_size);
		memset(m_data, ch, m_size);
	}
	String operator=( String & s)/*����=�������operator=��������ĳ�Ա���� */
	{
		if (this != &s)/* ȡ��ַ */
		{

            //String tmp(s);
			//swap(m_data, tmp.m_data);/*���� */
			m_capacity = s.m_capacity;
			m_size = s.m_size;
			m_data = new char[m_capacity];
			strncpy(m_data, s.m_data, s.m_size);
		}
		return *this;/* String ���� */
	}
	void reverse()
	{
		int i=0;
		int j = m_size-1;
		for (;i<j;i++,j--)
		{
			swap(m_data[i], m_data[j]);
		}
		
	}
	void reserve(size_t size)
	{
		/*��Ⲣ�ҿ��ٲ������ڴ棬��Ҫ������д�� */
		if (size > m_capacity)
		{
			m_capacity = (size / CAPACITY + 1)*CAPACITY;/* 2���Ĵ�С */
			m_data = (char *)realloc(m_data, m_capacity);
			/* ����m_capacity�ֽڴ�С�Ŀռ䣬���ҽ�m_data�е����ݸĵ��¿ռ䵱�� */
		}
	}
	 
	~String()
	{
		if (m_data)
		{
			delete[]m_data;
			m_data = NULL;
		}
		m_size = m_capacity = 0;
    }
	friend ostream & operator<<(ostream & os, const String & st);
	 
	size_t size()
	{
		return m_size;
	}
	size_t capacity()
	{
		return m_capacity;

	}
	bool empty()
	{
		return m_size == 0;
	}
	void clear()
	{
		/* ֻɾ�����ݿռ仹�� */
		m_size = 0;
	}
	void push_back(char tmp)
	{
		if (m_size>=m_capacity)
		{
			reserve(m_size);
		}
		m_data[m_size] = tmp;
		m_size++;
	}
	void pop_back()
	{
        if (m_size)
        {
			m_size--;
        }
	}
	int find(char tmp)
	{
		/* �����ҵ����±�ֵ */
		for (unsigned int i=0;i<m_size;i++)
		{
			if (m_data[i]==tmp)
			{
				return m_size - 1;
			}
		}
		return -1;
	}
	int find(String s,char * str)
	{
		/* ��string�����ַ���str�����ҵ�����Ԫ��λ�� */
		char * tmp = s.m_data;
		int len = strlen(str);
		for (;(tmp=strchr(tmp,*str))!= 0;tmp++)
		{
			if (strncmp(tmp,str,len)==0)
			{
				return tmp - m_data + 1;
			}
		}
		return -1;
	}
	int find(String s1, String s2)
	{
		/* ��string s1����string s2�����ҵ�����Ԫ��λ�� */
		/*s1.c_str����char* ���͵��ַ��� */
		char * a1 = s1.m_data;
		char * a2 = s2.m_data;
		int len = strlen(a2);
		for (; (a1 = strchr(a1, *a2)) != 0; a1++)
		{
			if (strncmp(a1, a2, len) == 0)
			{
				return a1 - s1.m_data + 1;
			}
		}
		return -1;
	}
	int insert(int pos, char tmp)
	{
		/* ��ǰ����� */
		reserve(m_size + 1);
		 
		for (int i=m_size-1;i>pos;--i)
		{
			m_data[i + 1] = m_data[i];
		}
		m_data[pos] = tmp;
		m_size++;
		return pos;
	}
	void earse(int pos)
	{
		if (pos==m_size-1)
		{
			m_size--;
		}
		for (size_t i=pos;i<m_size;i++)
		{
			m_data[i] = m_data[i+1];
		}
		m_size--;
	}
};
ostream & operator <<(ostream &os, const String & st)
{
	/* ����<<ҲҪʹ��std�������ռ� */
	for (unsigned int i=0;i < st.m_size;++i)
	{
		os << st.m_data[i];
	}
	return os;
}

