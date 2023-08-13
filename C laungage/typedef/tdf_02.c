#include<stdio.h>
int main()
{
    //int*a,b; -----------------------
    typedef int *intpointer; //      |
    intpointer a,b;   //             | 
    int c=65;         //             |
    a=&c;             //             |
    b=&c;             //             |
                       //            |
    return 0;         //             |
}//                                  |
/*Windows PowerShell                 |
Copyright (C) Microsoft Corporation. All rights reserved.

Install the latest PowerShell for new features and improvements! https://aka.ms/PSWindows

PS C:\Users\DELL\Desktop\C laungage> cd "c:\Users\DELL\Desktop\C laungage\typedef\" ; if ($?) { gcc tdf_02.c -o t
df_02 } ; if ($?) { .\tdf_02 }
PS C:\Users\DELL\Desktop\C laungage\typedef> cd "c:\Users\DELL\Desktop\C laungage\typedef\" ; if ($?) { gcc tdf_0
2.c -o tdf_02 } ; if ($?) { .\tdf_02 }
tdf_02.c: In function 'main':
tdf_02.c:6:16: error: redeclaration of 'a' with no linkage
     intpointer a,b;
                ^
tdf_02.c:4:9: note: previous declaration of 'a' was here
     int*a,b;
         ^
tdf_02.c:6:18: error: conflicting types for 'b'
     intpointer a,b;
                  ^
tdf_02.c:4:11: note: previous declaration of 'b' was here
     int*a,b;
           ^
PS C:\Users\DELL\Desktop\C laungage\typedef>*/