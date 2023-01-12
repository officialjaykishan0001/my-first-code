#include<iostream>
using namespace std;

int main()
{
    int num[]={1,2,3,4,5,6,7};
    
    int even,odd;
    even = 0;
    odd = 0;
    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++)
    {
        if(num[i]%2==0)
        {
            even +=1;
          
        }
        else {
            odd +=1;
        }

        
    }
    cout<<"the number of even number in the array is : "<<even<<endl;
    cout<<"the number of odd number in the array is : "<<odd<<endl;
    return 0;
}
/*JAI JAI JAI BAJARANGBALI...
THIS PROGRAM CODED BY JAYKISHAN KHARWAR
AT
TIME_11:33
DATE_28-11-2022*/