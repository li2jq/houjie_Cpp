#ifndef __STRING__
#define __STRING__
#include<string.h>


class String
{
  public:
    String(const char* cstr = 0);
    String(const String& a_str);
    String& operator=(const String& a_str);
    char* g_cstr_data() const {return m_data;}
    ~String();
  private:
    char* m_data;
};
inline
String::String(const char* cstr)
{
    if(cstr)
    {
        m_data = new char[strlen(cstr)+1];
        strcpy(m_data, cstr);
    }
    else
    {
        m_data = new char[1];
        *m_data = '\0';        
    }


}

inline
String::String(const String& a_str)
{
    m_data = new char(strlen(a_str.m_data)+1);
    strcpy(m_data, a_str.m_data); 
}

inline
String& String::operator=(const String& a_str)
{
    if(this == &a_str)
    {
        return *this;
    }
    delete [] m_data;
    m_data = new char(strlen(a_str.m_data)+1);
    strcpy(m_data, a_str.m_data);
    return *this;
}

inline
String::~String()
{
    delete [] m_data;
}


#include<iostream>
using namespace std;

inline 
ostream& operator << (ostream& os, String& c_str)
{
    return os << c_str.g_cstr_data();
}
#endif