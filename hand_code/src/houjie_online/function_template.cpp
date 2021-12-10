// #include <iostream>

// using namespace std;

// template <class T>

// inline const T& min11(T& a, T& b)
// {
//     return a < b ? a : b;
// }

// class Stone
// {
          
//     public:
//         Stone(int w=0, int h=0, int weight=0): _w(w), _h(h), _weight(weight)
//         {}
//         bool operator < (const Stone& rhs) 
//         {
//             return this->_weight < rhs._weight;
//         }

//         int _w, _h, _weight;

//         friend ostream& operator << (ostream& os, const Stone& ths);
// };

// ostream& operator << (ostream& os, const Stone& ths)
// {
//     return os << "w= " << ths._w << " h= " << ths._h << " weight= " << ths._weight << endl;
// }
// int main()
// {
//     Stone r1(2, 3, 1), r2(3, 5, 11), r3;

//     r3=min11(r1, r2);

//     cout << r3;
//     return 0;
// }

#include <iostream>
 
using namespace std;
 
template <class T>
 
inline const T& min11(T& a, T& b)
{
   return a < b ? a : b;
}
class Stone
{
   private:
       int _w, _h, _weight;
  
   public:
       Stone(int w=0, int h=0, int weight=0): _w(w), _h(h), _weight(weight)
       {}
       bool operator < (const Stone& rhs)
       {
           return this->_weight < rhs._weight;
       }
       ostream& operator << (ostream& os)
       {
           return os << "w= " << this->_w << " h= " << this->_h << " weight= " << this->_weight << endl;
       }
};
int main()
{
   Stone r1(2, 3, 121), r2(3, 5, 11), r3;
 
   r3=min11(r1, r2);
 
   r3<< cout;
 
   return 0;
}
