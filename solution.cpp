#include<bits/stdc++.h>
#include <chrono>
using namespace std;

// set to store words
unordered_set<string> s;

// dp for optimization
unordered_map<string, bool> dp;

// comparator
bool cmp(string x, string y)
{
    if(x.length()==y.length())
        return x<y;
    return x.length()>y.length();
}

bool iscon(string str)
{
	if(dp.find(str)!=dp.end())
		return dp[str];

    int l=str.length();
    for(int i=1; i<l; i++)
    {
        string left=str.substr(0,i);
        string right=str.substr(i);

        if(s.find(left)!=s.end() && (s.find(right)!=s.end() || iscon(right)))
        {
        	dp[str]=true;
        	return true;
        }    
    }
    dp[str]=false;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    
    // for execution time 
    auto start = chrono::high_resolution_clock::now();

    // code starts
    vector<string> v;

    string x;
    while(cin>>x)
    {
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++)
    s.insert(v[i]);

    sort(v.begin(), v.end(), cmp);

    int cnt=0;
    for(int i=0; i<v.size(); i++)
    {
        if(iscon(v[i]))
        {
            cout<<v[i]<<endl;
            cnt++;
        }    
        if(cnt==2)
            break;
    }
    // code ends

    // for execution time
    auto end = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
  
    time_taken *= 1e-9;
    cout << "time taken to process the input file : " << fixed 
         << time_taken << setprecision(9);
    cout << " sec" << endl;

    return 0;
}