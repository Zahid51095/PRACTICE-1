#include<bits/stdc++.h>

using namespace std;
//for c
// int main()
// {
//     int *p=(int*)malloc(10*sizeof(int)); //malloc er jagay calloc dile ar 10 er pore comma dile se sobgula ke 0 kore dey
//     for(int i = 0;i < 10;i++)
//     {
//         cout<<p[i]<<endl;
//     }
//     //free(p);
//     return 0;
// }

//for c++


 int main()
 {
    int *ptr = new int[10]{1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete ptr;
    return 0;
 }