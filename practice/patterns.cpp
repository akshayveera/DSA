
// patterns

#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;


    cout<<endl<<1<<endl;
    /*
    1

    ****
    ****
    ****
    ****

    */
    
    int i=1;
    
    
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    cout<<endl<<2<<endl;
    /*
    2 
    
    1111
    2222
    3333
    4444
    */
        
    i=1;
    
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    cout<<endl<<3<<endl;
    /*
    3
    
    1234
    1234
    1234
    1234
    */

    
    i=1;
    
    while(i<=n)
    {
        int j=1;
        
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    cout<<endl<<4<<endl;
    /*
    4
    
    4321
    4321
    4321
    4321
    */
    
    i=0;
    
    while(i<n)
    {
        int j=0;
        
        while(j<n)
        {
            cout<<n-j;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    cout<<endl<<5<<endl;
    /*
    5
    
    123
    456
    789
    */

    
    i=0;
    int z=1;
    
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            
            cout<<i+j+z<<" ";
            j++;
        }
        cout<<endl;
        i++;
        z+=2;
    }
    
    // other method for above problem 
    
    cout<<endl;
    
    i=0;
    int count=1;
    
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<count<<"  ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    cout<<endl<<6<<endl;
    /*
    6 
    
    *
    **
    ***
    ****
    */
    
    
    i=1;
    
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<'*';
            j++;
        }
        i++;
        cout<<endl;
    }
    
    cout<<endl<<7<<endl;
    /*
    7 
    
    1
    22
    333 
    4444
    */

    
    int row = 1;
    
    while(row<=n)
    {
        int col = 1;
        
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<8<<endl;
    /* 
    8 
    
    1 
    2 3 
    4 5 6 
    7 8 9 10
    */

    
    row=1;
    count = 1;
    
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<count<<" ";
            count++;
            col++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<9<<endl;
    /*
    9 
    
    1
    23 
    345 
    4567
    */

    
    row = 1;
    
    while(row<=n)
    {
        int col=0;
        while(col<row)
        {
            cout<< row+col;
            col++;
            
        }
        row++;
        cout<<endl;
    }
    
    
    // other method
    
    cout<<endl;
    
    row = 1;
    
    while(row<=n)
    {
        int col=1;
        int dup = row;
        while(col<=row)
        {
            cout<< dup;\
            dup++;
            col++;
            
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<10<<endl;
    /*
    10
    
    1
    21 
    321 
    4321
    */

    
    row=1;
    
    while(row<=n)
    {
        int col=0;
        while(col<row)
        {
            cout<<row-col;
            col++;
            
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<11<<endl;
    /* 
    11 
    
    AAAA
    BBBB
    CCCC
    */

    
    row = 1;
    
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<char(65+row-1);   // cout<<char('A'+row-1);
            col++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<12<<endl;
    /*
    12
    
    ABCD
    ABCD
    ABCD
    ABCD
    */

    
    row=1;
    
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<char('A'+col-1);
            col++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<13<<endl;
    /*
    13
    
    ABC 
    DEF 
    GHI
    */

    
    row=1;
    count =0;
    
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<char('A'+count);
            col++;
            count++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<14<<endl;
    /*
    14 
    
    ABCD 
    BCDE 
    CDEF 
    DEFG
    */

    
    row=0;
    
    while(row<n)
    {
        int col=0;
        int temp = row;
        while(col<n)
        {
            cout<<char('A'+temp);
            col++;
            temp++;
        }
        row++;
        cout<<endl;
    }
    
    // other method
    
    cout<<endl;
    
    row=1;
    
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<char('A'+row+col-2);
            col++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<15<<endl;
    /*
    15 
    
    A
    BB 
    CCC 
    DDDD
    */

    
    row=0;
    
    while(row<n)
    {
        int col=0;
        while(col<=row)
        {
            cout<<char('A'+row);
            col++;
            
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<16<<endl;
    /*
    16 
    
    A 
    BC 
    DEF 
    GHIJ
    */

    
    row = 1;
    
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<char(64+row+col-1)
            
            ;
            col++;
        }
        row++;
        cout<<endl;
    }
    
    cout<<endl<<17<<endl;
    /*
    17
    
    A 
    BC 
    CDE 
    DEFG
    */
    
    row=1;

    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<char('A'+row+col-2);
            col++;
        }
        row++;
        cout<<endl;
        
    }

    cout<<endl<<18<<endl;
    /*
    18

    D
    CD
    BCD
    ABCD
    */

    row = 1;

    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<char(64+n-row+col);
            col++;
        }
        row++;
        cout<<endl;
    }

    cout<<endl<<19<<endl;
    /*
    19
    
        *
       **
      ***
     ****
    *****
    */
    
    row =1;

    // method-1 

    row =1;

    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            if(row+col<n+1)
            {
                cout<<" ";
                col++;
            }
            else
            {
                cout<<"*";
                col++;
            }
        }
        row++;
        cout<<endl;
    }

    // method-2
    
    cout<<endl;

    row=1;

    while(row<=n)
    {
        // firstly print spaces
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // then print stars
        int star = row;
        while(star)
        {
            cout<<"*";
            star--;
        }

        row++;
        cout<<endl;
        
    }

    cout<<endl<<20<<endl;
    /*
    20

    *****
    ****
    ***
    **
    *
    
    */

    row=1;

    while(row<=n)
    {
        int star = n-row+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        row++;
        cout<<endl;
    }

    cout<<endl<<21<<endl;
    /*
    21

    *****
     ****
      ***
       **
        *
    */
    
    row=1;

    while(row<=n)
    {
        // firstly print spaces 
        int space = row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // then print stars
        int star = n-row+1;
        while(star)
        {
            cout<<"*";
            star--;
        }

        row++;
        cout<<endl;       
    }

    cout<<endl<<22<<endl;
    /*
    22

    1111
     222
      33
       4
    */

    row=1;

    while(row<=n)
    {
        // firstly print spaces
        int space = row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // then print digits
        int digit = n-row+1;
        while(digit)
        {
            cout<<row;
            digit--;
        }

        row++;
        cout<<endl;
    }

    cout<<endl<<23<<endl;
    /*
    23

        1
       22
      333
     4444
    55555
    */

    // method-1

    row =1;

    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            if(row+col<n+1)
            {
                cout<<" ";
                col++;
            }
            else
            {
                cout<<row;
                col++;
            }
        }

        row++;
        cout<<endl;

    }

    // method - 2
    cout<<endl;

    row =1;

    while(row<=n)
    {
        // firstly print spaces
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // then print digits
        int digit = row;         // int temp = 1;
        while(digit)             // while(temp<=row)
        {
            cout<<row;
            digit--;
        }

        row++;
        cout<<endl;

    }

    cout<<endl<<24<<endl;
    /*
    24
    
    1234
     234
      34
       4
    */

    row = 1;

    while(row<=n)
    {
        // firstly print spaces
        int space = row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // then print digits
        int digit =row;
        while(digit<=n)
        {
            cout<<digit;
            digit++;
        }

        row++;
        cout<<endl;

    }

    cout<<endl<<25<<endl;
    /*
    25

       1
      23
     456
    78910
    */

    row =1;
    count =1;

    while(row<=n)
    {
        // firstly print spaces
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // now print digits
        int digit = row;
        while(digit)
        {
            cout<<count;
            count++;
            digit--;
        }

        row++;
        cout<<endl;
    }


    cout<<endl<<26<<endl;
    /*
    26

       1
      121
     12321
    1234321
    */

    row =1;

    while(row<=n)
    {
        // firstly print spaces
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }

        // next print left half triangle
        int left = 1;
        while(left<=row)
        {
            cout<<left;
            left++;
        }

        // finally print right triangle
        int right = row-1;
        while(right)
        {
            cout<<right;
            right--;
        }

        row++;
        cout<<endl;
    }

    cout<<endl<<27<<endl;
    /*
    27
    
    if n=5

    1234554321
    1234**4321
    123****321
    12******21
    1********1 
    */

    row=1;

    while(row<=n)
    {
        // firstly print left trianlge of digits
        int left_digits = 1;
        while(left_digits<=n-row+1)
        {
            cout<<left_digits;
            left_digits++;
        }

        // then print middle triangle of stars
        int middle_stars = (row-1)*2;
        while(middle_stars)
        {
            cout<<"*";
            middle_stars--;
        }

        // finally print right triangle of digits
        int right_digits = n-row+1;
        while(right_digits)
        {
            cout<<right_digits;
            right_digits--;
        }

        row++;
        cout<<endl;

    }





    





    
   


    
    
    
    
    
    
    
   
   
   
   
   
    
}