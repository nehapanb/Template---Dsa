#include<iostream>
using namespace std;
template < typename t1>
t1 sum(t1 a, t1 b)
{
    return a + b;
}
template <typename x1 , typename x2>
x1 multiply  (x1 x,x2 y)

{
 
 return x*y;

}
int main(){
    cout<<sum(8.3,9.9)<<"\n";
    cout<< multiply(3,2.3);
}


