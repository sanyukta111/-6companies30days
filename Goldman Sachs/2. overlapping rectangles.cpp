#include<iostream>
#include<vector>
using namespace std;

//function
bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[2] <= rec2[0] || rec1[1] >= rec2[3] || rec1[0] >= rec2[2] || rec1[3] <=rec2[1])
        {
            return false;
        }
        else
        {
            return true;
        }
    }

//main file

int main()
{
    vector<int>rec1, rec2;
    int n;
    for(int i=0;i<4;i++)
    {
        cin>>n;
        rec1.push_back(n);
    }
    for(int i=0;i<4;i++)
    {
        cin>>n;
        rec2.push_back(n);
    }
    bool ans = isRectangleOverlap(rec1,rec2);
    if(ans == false)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
    return 0;
}
