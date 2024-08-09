Ques 1) 
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}



Ques 2) 

5
* 
* * 
* * * 
* * * * 
* * * * * 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

Ques 3) 
5

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

Ques 4) 
5

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

Ques 5) 
5
* * * * * 
* * * * 
* * * 
* * 
* 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}

Ques 6) 
5


1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}


Ques 7) 

5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i+1;j++){
           cout<<" ";
       }
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<endl;
    }

    return 0;
}


Ques 7) 

5
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++){
           cout<<" ";
       }
       for(int j=1;j<=n-i+1;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<endl;
    }

    return 0;
}

Ques 8) 

5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
     for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i+1;j++){
           cout<<" ";
       }
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<endl;
    }
    
  for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++){
           cout<<" ";
       }
       for(int j=1;j<=n-i+1;j++)
       {
           cout<<"*"<<" ";
       }
       cout<<endl;
    }

    return 0;
}

Ques 10) 

5
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * 
* * * * 
* * * 
* * 
*


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

   for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}

Ques 11) 
5

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
    int flag_1 = 1;
    for(int i=0;i<n;i++)
    {
        int flag_2 = flag_1;
        for(int j=0;j<=i;j++)
        {
            cout<<flag_2<<" ";
            flag_2=!flag_2;
           
        }
        flag_1=!flag_1;
        cout<<endl;
    }

    return 0;
}

Ques 12) 
5

1        1
12      21
123    321
1234  4321
1234554321

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        
        cout<<endl;
       
    }

    return 0;
}

Ques 13) 
5

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
   int count = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<count<<" ";
           count++;
        }
        cout<<endl;
       
    }

    return 0;
}

Ques 13) 
5

A 
A B 
A B C 
A B C D 
A B C D E

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
  
    for(int i=1;i<=n;i++)
    {
        char character = 'A';
        for(int j=1;j<=i;j++)
        {
           cout<<character<<" ";
           character++;
        }
        cout<<endl;
       
    }

    return 0;
}


Ques 14) 

5

A 
B B 
C C C 
D D D D 
E E E E E 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
  char character = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<character<<" ";
        }
        character++;
        cout<<endl;
       
    }

    return 0;
}

Ques 16)

5

E 
D E 
C D E 
B C D E 
A B C D E 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    
    
  char character =(char) 65+n-1;
    for(char c1=character;c1>='A';c1--)
    {
        for(char c2=c1;c2<=character;c2++)
        {
           cout<<c2<<" ";
        }
        cout<<endl;
       
    }

    return 0;
}

Ques 17) 
5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*";
        }
        for(int j=2*(i-1);j>0;j--)
        cout<<" ";
         for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
      for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*";
        }
        for(int j=2*(i-1);j>0;j--)
        cout<<" ";
         for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
}

Ques 18 ) 

5

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int j;
        // For upper half right triangle
        for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //for upper half space after right triangle
        for(int k=j-1;k<n;k++)
        {
           cout<<" "; 
        }
        //for upper half space before left triangle
        for(int k=j-1;k<n;k++)
        {
           cout<<" "; 
        }
        // for upper half left triangle
         for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
       
    }
    
    // SImailar as above but just for lower triangles 
      for(int i=n-1;i>=1;i--)
    {
        int j;
        for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        
        for(int k=j-1;k<n;k++)
        {
           cout<<" "; 
        }
        for(int k=j-1;k<n;k++)
        {
           cout<<" "; 
        }
         for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
}


Ques 18) 

5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
for(int i=0;i<n;i++)
{
    if(i==0||i==n-1)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
    else
    {
       for(int j=0;j<n;j++)
        {
          if(j==0||j==n-1)
          cout<<"*"<<' ';
          else
          cout<<"  ";
        }
        cout<<endl;
    }
}
    
}

Ques 19 ) 

5

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 

Written by me ... but took so much time

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Create a 2D vector to hold the pattern
    vector<vector<int>> v(2 * n - 1, vector<int>(2 * n - 1, 0));
    
    // Fill the pattern for the upper half and the center line
    for (int i = 0; i < n; ++i) {
        // Fill the left side of the row
        for (int j = 0; j < i; ++j) {
            if (i == 0)
                v[i][j] = n;
            else
                v[i][j] = v[i - 1][j];
        }
        
        // Fill the center of the row
        for (int j = i; j <= 2 * (n - 1) - i; ++j) {
            if (i == 0)
                v[i][j] = n;
            else
                v[i][j] = v[i - 1][j] - 1;
        }
        
        // Fill the right side of the row
        for (int j = 2 * (n - 1) - (i - 1); j < 2 * n - 1; ++j) {
            if (i == 0)
                v[i][j] = n;
            else
                v[i][j] = v[i - 1][j];
        }
    }
    
    // Copy the upper half pattern to the lower half by mirroring
    for (int i = n; i < 2 * n - 1; ++i) {
        for (int j = 0; j < 2 * n - 1; ++j) {
            v[i][j] = v[2 * n - 2 - i][j];
        }
    }
    
    // Print the pattern
    for (int i = 0; i < 2 * n - 1; ++i) {
        for (int j = 0; j < 2 * n - 1; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



