#include <bits/stdc++.h>
using namespace std;

// void print(){
//     cout<<"Dev";
// }
// int sum(int a,int b){
//     return a+b;
// }
// int main() {
//     print();
//     int s = sum(1,5);
//     cout<<s;
//     return 0;
// }


// void explainPair() {
// pair<int, int> p = {1, 3};
// cout << p.first << " " << p.second;
// pair<int, pair<int, int>> nestedPair = {1, {3, 4}};
// cout << nestedPair.first << " " << nestedPair.second.second << " " << nestedPair.second.first;
// pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};
// cout << arr[1].second;
// }


void explainPair() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vc;
    vc.push_back({1,2});
    vc.emplace_back(1,2);

    vector<int> v1(5,100);

    vector<int> v2(5);
    vector<int> v3(5,20);
    vector<int> v4(v3);

    vector<int> ::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout<<*(it)<<" ";

    //other iterators

    // vector<int>::iterator it1 = v.end();
    // vector<int>::iterator it2 = v.rend();
    // vector<int>::iterator it3 = v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    //! Long Form
    // for(vector<int>::iterator it = v.begin();it != v.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    //! Short Form
    for (auto it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    //! Even shorter
    for (auto it : v){
        cout<<it<<" ";
    }  

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);
    //{10,12,23}
    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);
    // {10, 20, 35} [start, end)

    // Insert function
    v = vector<int>(2, 100); // {100, 100}
    v.insert(v.begin(), 300);
    // {300, 100, 100};
    v.insert(v.begin() + 1, 2, 10);
    // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}
    // {10, 20}
    cout << v.size(); // 2
    //{10, 20}
    v.pop_back(); // {10}
    v1.swap(v2);
    v.clear();
    cout<<v.empty();
}

    //! List
    //! Deque
    //!Stack
    /*
        Works on principle of LIFO
        Time Complexity : O(1)
    */
    void explainStack() {
        stack<int> st;
        st.push(1); // {1}
        st.push(2); // {2, 1}
        st.push(3); // {3, 2, 1}
        st.push(3); // {3, 3, 2, 1}
        st.emplace(5); // {5, 3, 3, 2, 1}

        cout << st.top();
        // prints 5 "** st[2] is invalid **"

        st.pop(); // st looks like {3, 3, 2, 1}
        cout << st.top();// 3
        cout << st.size(); // 4
        cout << st.empty();
        stack<int>st1, st2;
        st1.swap(st2);
    }
    
    //! Queue
    /*
        FIFO 
        O(1)
    */
    void explainQueue() {
        queue<int> q;
        q.push(1); // {1}
        q.push(2); // {1, 2}
        q.emplace(4); // {1, 2, 4}
        q.back() += 5;
        cout << q.back(); // prints 9
        // Q is {1, 2, 9}
        cout << q.front(); // prints 1
        q.pop(); // {2, 9}
        cout << q.front(); // prints 2
        // size swap empty same as stack
        }

    //! PQ
    /*
        Max Heap, Min Heap
        push = O(log n)
        top = O(1)
        pop  = O(log n)

    */
    void explainPQ() {
        priority_queue<int>pq;
        pq.push(5); // {5}
        pq.push(2); // {5, 2}
        pq.push(8); // {8, 5, 2}
        pq.emplace(10); // {10, 8, 5, 2}
        cout << pq.top(); // prints 10
        pq.pop(); // {8, 5, 2}
        cout << pq.top(); // prints 8
        // size swap empty function same as others

        // Minimum Heap
        priority_queue<int, vector<int>, greater<int>> pq1;
        pq.push(5); // {5}
        pq.push(2); // {2, 5}
        pq.push(8); // {2, 5, 8}
        pq.emplace(10); // {2, 5, 8, 10}
        cout << pq.top(); // prints 2
}

    //! Set
    /* 
        Sorted , Unique
        O(log n)
    */
    void explainSet() {
        set<int>st;
        st.insert(1);
        // {1}
        st.emplace(2);
        // {1, 2}
        st.insert(2);
        // {1, 2}
        st.insert(4);
        // {1, 2, 4}
        st.insert(3);
        // {1, 2, 3, 4}

        // Functionality of insert in vector
        // can be used also, that only increases
        // efficiency

        // begin(), end(), rbegin(), rend(), size(),
        // empty() and swap() are same as those of above
        // {1, 2, 3, 4, 5}
        auto it = st.find(3);
        // {1, 2, 3, 4, 5}
        it = st.find(6);
        // {1, 4, 5}
        st.erase(5); // erases 5 // takes logarithmic time

        int cnt = st.count(1);

        it = st.find(3);
        st.erase(it)
        ; // it takes constant time

        // {1, 2, 3, 4, 5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1, it2);
        // after erase {1, 4, 5} [first, last)

        // lower_bound() and upper_bound() function works in the same way
        // as in vector it does.

        // This is the syntax
        it = st.lower_bound(2);
        it = st.upper_bound(3);
    }

    //! MultiSet
    void explainMultiSet(){
        // Everything is same as set
        // only stores duplicate elements also
        multiset<int>ms;
        ms.insert(1);// {1}
        ms.insert(1);// {1, 1}
        ms.insert(1);// {1, 1, 1}

        ms.erase (1);// all 1's erased

        int cnt = ms.count(1);

        // only a single one erased
        ms.erase(ms.find(1));

        ms.erase(ms.find(1), next(ms.find(1), 2));
        // rest all function same as set
}

    //! Unordered Set
    /*
        Randomized Order
        Dont allow duplicate
        upper bound and lower bound dont work , rest all work
        O(1)
        worst case O(n)
    */
    void explainUSet() {
        unordered_set<int> st;
        // tower_bound and upper_bound function
        // does not works, rest all functions are same
        // as above, it does not stores in any
        // particular order it has a better complexity
        // than set in most cases, except some when collision happens
}   

    //! Map container
    /*
        (key , value)
    */
        void explainMap() {
        map<int, int> mpp;
        map<int, pair<int, int>> mpp1;
        map< pair<int, int>, int> mpp2;

        mpp [1] = 2;
        mpp.emplace(3, 1);
        mpp.insert({2, 4});
        mpp2[{2,3}] = 10;
        {
        // {1, 2};
        // {2, 4};
        // {3, 1};
        }

        for(auto it: mpp) {
        cout << it.first <<" "<< it.second << endl;
        }

        cout << mpp [1];
        cout << mpp [5];

        auto it = mpp.find(3);
        cout << it->second;
        it = mpp.find(5);
        cout << endl;
        // This is the syntax
        it = mpp.lower_bound(2);
        it = mpp.upper_bound(3);
        // erase, swap, size, empty, are same as above
    }     


    //! Alogs
    // Put this OUTSIDE the function, above explainExtra()
    bool comp(pair<int,int> p1, pair<int,int> p2) {
        if (p1.second < p2.second) return true;
        if (p1.second > p2.second) return false;
        // if second is same, sort by first element descending
        return p1.first > p2.first;
        // sort by second element ascending
}

    void explainExtra() {
        int a[] = {5, 2, 4, 1, 3};
        vector<int> v = {5, 2, 4, 1, 3};
        int n = 5;

        sort(v.begin(), v.end());       // sorts the whole vector
        sort(a + 2, a + 4);             // sorts only indexes 2 and 3
        sort(a, a + n, greater<int>()); // descending order
        sort(a, a + n);                 // sorts the whole array
        
        pair<int,int> p[] = {{1, 2}, {2, 1}, {4, 1}};
        int m = 3;
        
        // sort by second element; if equal, by first element descending
        // result: {4,1}, {2,1}, {1,2}
        sort(p, p + m, comp);

        int num = 7;
        int cnt = __builtin_popcount(num);   // number of set bits (7 = 111 → 3)

        long long num2 = 165786578687;
        int cntll = __builtin_popcountll(num2);
        
        string s = "123";

        do
        {
            cout<<s<<endl;
        } while (next_permutation(s.begin(),s.end()));
        int maxi = *max_element(a,a+n);
        
}
    int main(){

        return 0;
    }
