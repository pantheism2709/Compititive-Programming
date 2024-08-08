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



