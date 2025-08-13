
# Math

### Armstrong Number 
```
// cpp

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n = 371;
  int org = n;
  int len = 0;
  int sum = 0;
  
  while(n>0) {
    n /= 10;
    len++;
  }
  
  n = org;
  
  while(n>0) {
    int d = n % 10;
    sum += pow(d,len);
    n /= 10;
  }
  
  if(sum == org) cout<<"true";
  else cout<<"false";
  
}
```

### Prime number 

```
// cpp
// method-1

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n = 29;
    int c = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c++;
            if (n / i != i) c++;
        }
    }

    if (c == 2)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

}

```

### GCD or HCF

```
// cpp
// method-1

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a = 20, b = 40;
  
  for(int i=min(a,b); i>0; i--) {
    if(a%i==0 && b%i==0) {
      cout<<i<<endl;
      break;
    }
  }
  
}


```


```
// cpp
// method-2

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a = 20, b = 40;
  
  while(a>0 && b>0) {
    
    if(a>b) a=a%b;
    else b=b%a;
    
    if(a==0) cout<<b;
    else if(b==0) cout<<a;
  }
  
}

```

```
// cpp
// method-3

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a = 52, b = 10;  
  int maxi = max(a,b), mini = min(a,b);
  
  while(mini>0 && maxi>0) {
    
    maxi = mini;
    mini = maxi % mini;    
  }
  
  cout<<maxi; 
  
}

```
