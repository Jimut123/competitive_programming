#include <bits/stdc++.h>

using namespace std;


// Complete the marcsCakewalk function below.
long marcsCakewalk(vector<int> calorie) {
    
    sort(calorie.begin(), calorie.end(), greater<int>());
    int exponent = 0;
    long result = 0;
    
    for(int i : calorie) 
        result = result + (i * pow(2, exponent++));
    
    return result;
}

int main()
{
    int T,num;
    vector <int> vect;
    cin>>T;
    while(T--)
    {
        cin>>num;
        vect.push_back(num);
    }
    cout<<marcsCakewalk(vect)<<endl;
    return 0;
}


