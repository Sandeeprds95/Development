/*
Roy is standing on a lattice point ( point with integer co-ordinates ) (x,y) inside an axis-parallel rectangle.
The lower left corner of the rectangle is (x1,y1) and the upper right corner is (x2,y2).
If Roy walks only along the grid lines, what is the minimum euclidean distance he needs to travel to reach the rectangle's border.

Input Format
The first line of input contains T, the number of test cases.
Each of the next T lines contains 6 space separated integers x,y,x1,y1,x2,y2.

Constraints
1≤T≤105
−109≤x1≤x≤x2≤109
−109≤y1≤y≤y2≤109

Output Format
For each test case, print the minimum euclidean distance Roy needs to cover on a separate line.

Sample Input

3
1 2 0 0 2 3
0 0 -2 -2 2 2
-1 0 -3 0 1 0
Sample Output

1
2
0
Explanation

For the first testcase, the rectangle has co-ordinates (0, 0), (2, 0), (2, 3) and (0, 3).
To reach the border, Roy can travel from (1, 2) to (0, 2), and hence the answer 1.

For the second testcase, the rectangle has co-ordinates (-2, -2), (-2, 2), (2, 2) and (2, -2).
To reach any border, Roy has to travel a minimum distance of 2.

For the third testcase, the rectangle has co-ordinates (-3, 0), (-3, 0), (1, 0) and (1, 0).
And (-1, 0) is already on the border of the rectangle. Hence 0.
*/

#include <cmath>
#include <iostream>
using namespace std;


int main()
{
    long long x,y,x1,x2,y1,y2,min=0,s=0;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(x2!=x1 && y1!=y2)
        {
                min=sqrt(pow((x-x1),2)+pow((y-y1),2));
                    if(sqrt(pow((x-x2),2)+(pow((y-y2),2))<min))
                    {
                        min=sqrt(pow((x-x2),2)+pow((y-y2),2));
                        x1=x2;y1=y2;
                    }
                    else if(sqrt(pow((x-x1),2)+pow((y-y2),2))<min)
                    {
                        min=sqrt(pow((x-x1),2)+pow((y-y2),2));
                        y1=y2;
                    }
                    else if(sqrt(pow((x-x2),2)+pow((y-y1),2))<min)
                    {
                        min=sqrt(pow((x-x2),2)+pow((y-y1),2));
                        x1=x2;
                    }
            s=sqrt(pow((x-x1),2));
            if(sqrt(pow((y-y1),2)<s))
                    s=sqrt(pow((y-y1),2));
            cout<<s<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}

