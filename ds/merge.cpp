#include<iostream>
using namespace std;
void merge()
{
     int  b[10]={1,2,4,6,8,10,12};
     int a[10]={1,3,5,6,7,8,9};
     int c[100];
     int ub=14;
     int j=0;
     int i=0;
     int m=0;
     while( m<=ub)

     {

        if (b[j]>a[i])
        
            {
            c[m]=a[i];
            i=i+1;
            }         
        else
           {
                c[m]=b[j];
                j=j+1;

            }
        m=+1;
     }
     
for(int k=0;k<=14;k++){
cout << c[k]<< " ";
}

    
     
    
}
int main ()
{   cout<<"The array after merging is : ";
merge();

return 0;
}
