#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size of array is :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}

void printVecp(vector<pair<int, int>> v)
{
    cout << "size of array is :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

void printVecA(vector<int> v)
{
    cout << "size of array is :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ' << endl;
    }
    cout << endl;
}

int main()
{
    // pair is for maintain relation between two data types:
    pair<int, string> p;
    p = {2, "qweg"};
    cout << p.first << " " << p.second;
    pair<int, int> p[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i].first;
        cin >> p[i].second;
    }
    swap(p[0], p[1]);
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << " " << endl;
    }

    // vectors: it is dynamic size array:
   
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        printVec(v);
        // making copy of v in v1 ;
        vector<int> v1=v;
        v1.push_back(45);
        printVec(v1);

        // vector of pair:
        vector<pair<int,int>> v;
        int n ;
        cin>>n;
        for(int i=0 ; i<n ;i++){
            int x , y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        printVecp(v);

    // vector of arrays:
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i =0 ;i<N ;i++)
    {
        int n ;
        cin>>n;
        for(int j=0 ; j<n; j++)
        {
            int x ;
            cin>>x;
            v[i].push_back(x);
        }

    }
    for(int i=0 ;i<N ; i++){
    printVecA(v[i]);
    }

    //  vector of vectors:
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int &value : v[i])
        {
            cout << value;
        }
        cout << endl;
    }
    

    //   MAPS:key value pair;elements stored in sorted order:map<int , string> m;
        map<int, string> m;
        m.insert({4, "qwe"});
        m.insert({1, "wert"});
        m.insert({2, "qwe"});
        m.insert({6, "wert"});

    for(auto &value : m)
    {
        cout<<value.first<<" "<<value.second<<" "<<endl;
    }

    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = m[s] + 1;
    }

    for (auto &value : m)
    {
        cout << value.first << " " << value.second << " " << endl;
    }

    return 0; 
}