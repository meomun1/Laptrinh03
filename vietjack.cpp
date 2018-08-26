#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main ()
{
   int n[ 10 ]; // n la mot mang gom 10 so nguyen
 
   // khoi tao gia tri cac phan tu cua mang n la 0          
   for ( int i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; // thiet lap phan tu tai vi tri i la i + 100
   }
   cout << "Phan tu thu:" << setw( 13 ) << "Gia tri la:" << endl;
 
   // hien thi gia tri cua moi phan tu                     
   for ( int j = 0; j < 10; j++ )
   {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}
