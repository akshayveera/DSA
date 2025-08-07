
# Patterns

### 1
```
*****
*****
*****
*****
*****
```
```
// cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout<<'*';
    }
    cout<<endl;
  }
}
```

### 2
```
*
**
***
****
*****
```
```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      cout<<'*';
    }
    cout<<endl;
  }
}
```

### 3
```
1
12
123
1234
12345
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=1; i<n+1; i++) {
    for(int j=1; j<=i; j++) {
      cout<<j;
    }
    cout<<endl;
  }
}
```

### 4
```
1
22
333
4444
55555
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=1; i<n+1; i++) {
    for(int j=1; j<=i; j++) {
      cout<<i;
    }
    cout<<endl;
  }
}
```

### 5
```
*****
****
***
**
*
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=n; i>0; i--) {
    for(int j=i; j>0; j--) {
      cout<<'*';
    }
    cout<<endl;
  }
}
```

### 6
```
12345
1234
123
12
1
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=n; i>0; i--) {
    for(int j=1; j<=i; j++) {
      cout<<j;
    }
    cout<<endl;
  }
}
```

### 7
```
    *
   ***
  *****
 *******
*********
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int s = 1; // no.of stars in a row
  
  for(int i=0; i<n; i++,s+=2) {
    for(int j=0; j<n+i; j++) {
      if(j >= n+i-s) {
        cout<<'*';
      } else {
        cout<<' ';
      }
    }
    cout<<endl;
  }
}
```

### 8
```
*********
 *******
  *****
   ***
    *
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int s = 2 * (n-1) + 1; // no.of stars in a row
  
  for(int i=n-1; i>=0; i--,s-=2) {
    for(int j=n+i; j>0; j--) {
      if(j <= s){
        cout<<'*';
      } else {
        cout<<' ';
      }
    }
    cout<<endl;
  }
}
```

### 9
```
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  // upper part
  for(int i=0; i<n; i++) {
    for(int j=0; j<2*n-1; j++) {
      if(i+j >= n-1 && i+j <= n-1 + 2*i) {
        cout<<'*';
      } else {
        cout<<' ';
      }
    }
    cout<<endl;
  }
  
  // lower part
  for(int i=0; i<n; i++) {
    for(int j=0; j<2*n-1; j++) {
      if( (i+j <= 2*(n-1)) && (i+j >= 2*(n-1) - 2*(n-i-1))) {
        cout<<'*';
      } else {
        cout<<' ';
      }
    }
    cout<<endl;
  }
}


```




### 10
```
*
**
***
****
*****
****
***
**
*
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  // upper part
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      cout<<"*";
    }
    cout<<endl;
  }
  
  // lower part
  for(int i=n-1; i>0; i--) {
    for(int j=i; j>0; j--) {
      cout<<"*";
    }
    cout<<endl;
  }
}
```





### 11
```
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      if((i+j)%2 == 0) {
        cout<<"1 ";
      } else {
       cout<<"0 ";
      }
    }
    cout<<endl;
  }
}

```





### 12
```
1                 1 
1 2             2 1 
1 2 3         3 2 1 
1 2 3 4     4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int x = 2*n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<x; j++) {
      int val;
      
      if(j <= n-1) {
        val = j+1;
      } else {
        val = x-j;
      }
      
      if(val <= i+1) {
        cout<<val<<" ";
      } else {
        cout<<"  ";
      }
    }
    
    cout<<endl;
  }
}
```





### 13
```
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  int x = 0;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      cout<<++x<<" ";
    }
    cout<<endl;
  }
  
}
```




### 14
```
A 
A B 
A B C 
A B C D 
A B C D E 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      char ch = 'A' + j;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
```




### 15
```
A B C D E 
A B C D 
A B C 
A B 
A 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=n; i>=0; i--) {
    for(int j=0; j<i; j++) {
      char ch = 'A' + j;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

```






### 16
```
A 
B B 
C C C 
D D D D 
E E E E E 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      char ch = 'A' + i;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

```





### 17
```
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    int iCopy = i-1;
    for(int j=0; j<n+i; j++) {
      
      if(i+j < (n-1)) {
        cout<<" ";
        continue;
      }
      
      char ch = 'A';
      
      if(j <= n-1) {
        ch = 'A' + i + j - (n-1);
        cout<<ch;
      } else {
        ch = 'A' + iCopy--;
        cout<<ch;
      }
    }
    
    cout<<endl;
  }
}
```





### 18
```
E 
D E 
C D E 
B C D E 
A B C D E 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  char ch = 'A' + n-1;
  
  for(int i=0; i<n; i++) {
    for(int j=i; j>=0; j--){
      ch = 'A' + n-1 - j;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

```





### 19
```
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
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<2*n; i++) {
    for(int j=0; j<2*n; j++) {
      
      if(i<n) {
        
        if(i+j >= n && i+j <= (n-1 + 2*i)) {
          cout<<" ";
        } else {
          cout<<"*";
        }
        
      } else {
        
        if(i+j <= n + 2*(n-1) && i+j >= (n-1 + 2*(i - (n-1)))) {
          cout<<" ";
        } else {
          cout<<"*";
        }
        
      }
    }
    cout<<endl;
  }
}

```






### 20
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<2*n-1; i++) {
    for(int j=0; j<2*n; j++) {
      
      if(i<n-1) {
        
        if(i+j >= (2*i)+1 && i+j <= 2*(n-1)) {
          cout<<" ";
        } else {
          cout<<"*";
        }
        
      } else if(i==n-1) {
        
        cout<<"*";
        
      } else if(i > n-1) {
        
        if((i+j >= (2*n)-1) && (i+j <= 2*n + (i-n)*2)) {
          cout<<" ";
        } else {
          cout<<"*";
        }
        
      }
    }
    cout<<endl;
  }
}

```






### 21
```
*****
*   *
*   *
*   *
*****
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(i==0 || i==n-1 || j==0 || j==n-1) {
        cout<<"*";
      } else {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}

```






### 22
```
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 
```

```
//cpp

#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;

  for(int i=0; i<2*n-1; i++) {
    for(int j=0; j<2*n-1; j++) {
      int top = i;
      int left = j;
      int bottom = 2*n-2-i;
      int right = 2*n-2-j;
      
      int ans = n - min(min(top, bottom), min(left, right));
      
      cout<<ans<<" ";
    }
    cout<<endl;
  }
}

```
