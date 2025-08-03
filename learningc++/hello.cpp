// # include<bits/stdc++.h>
// using namespace std;
//     void printpattern(int n){
//         for(int i = 0; i < n; i++) {
//             for(int j = n - i; j > 0; j--) {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }
// int main() {
//     int n;
//     cin >> n;
//     printpattern(n);
// }

// PAIR lie in utility library

// # include<bits/stdc++.h>
// using namespace std;
//     void explainPair() {
//         pair<int, int> p = {1, 3};
//         cout << p.first << " " << p.second;
//         pair<int, pair<int, int>> p = {1, {3, 4}};
        

//         pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
//         cout << arr[1].second;
//     }
       
// int main() {
//     int n;
//     cin >> n;
    
// }






// VECTORS.. 


// # include<bits/stdc++.h>
// using namespace std;
//     void explainVector() {
//         vector<int> v;
//         v.push_back(1);
//         v.emplace_back(2);


//         vector<pair<int, int>> vec;

//         vec.push_back({1,2});   
//         vec.emplace_back(1,2);


//         vector<int> v(5, 100);     { 100, 100, 100, 100, 100};
//         vector<int> v2(v);
        

//         cout << v2[0] <<endl;

//         vector<int>::iterator it =  v.begin();   // it is address;
//         it++;
//         cout << *(it);

//         for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//             cout<< *(it);
//         }
//         for(auto it = v.begin();it!=v.end(); it++) {
//             cout<< *(it);
//         }
//         for(auto it : v) {
//             cout << it << " ";
//         }

//         v.erase(v.begin());
//         v.insert(v.begin()+1, 100);


//     }




//list


// #include<bits/stdc++.h>
// using namespace std;

// void explainList() {
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(4);      //insert is taking time.. comple..

//     ls.push_front(5);
//     ls.emplace_front();
// }

//deque is same as ls


// Stack..

// set<int> s;   everythimg in the sorted order
//auto it = st.find(3); it will return an iterator..



//MAP
// keys are unique but the val can be different 
// void explainMap() {
//     map<int, int> mpp;
//     map<int, pair<int, int>> mpp;
//     map<pair<int, int>, int> mpp;

//     mpp[1] = 2;
//     mpp.emplace({3, 1});
//     mpp.insert({2, 4});


//     mpp({2, 3}) = 23;     // for third case..
//     for(auto it : mpp) {
//         cout << it.first <<" " << it.second << endl ;
//      }
//      cout<< mpp[4];
// }



// ALGORITHIRM..
// #include<bits/stdc++.h>
// using namespace std;

// void explainExtra() {
//     sort(a, a + n);
//     sort(v.begin(), v.end());
//     sort(a, a + n, greater<int>);


//     bool comp(pair<int, int>p1, pair<int, int>p2) {
//         if(p1.second< p2.second) return true;
//         if(p1.second > p2.second) return false;

//         if(p1.first > p2.first) return true;
//         if(p1.firts < p2.first) return false;
//     }
//     pair<int, int>arr[] = {{1, 3}, {3, 4}, {6, 7}};
//     sort(a, a+n, comp);
// }



// # include <bits/stdc++.h>
// using namespace std;
//    void countDigits(int n) {
//     list<int> ls;
//      for(int i = 1; i * i <= n; i++) { //   O(sqrt(n))
//         if(n % i == 0) {
//            ls.push_back(i);
//             if((n/i) != i) {
//                 ls.push_back(n/i);
//             }
//         }
//      }
//      sort(ls.begin(), ls.end());   // nlog(n);
//      for(auto it : ls) cout << it << " ";  // n
//    }
   

//    int main() {
//     int n;
//     cin >> n;
//     countDigits(n);
//    }




// GCD

// # include <bits/stdc++.h>
// using namespace std;

// void gcd(int a, int b) {
//     while(a > 0 && b > 0) {    // O(log@ (m(a, b)))
//         if(a > b) a = a % b;
//         else b = b % a;
//     }
//     if(a == 0) cout << b;
//     else cout << a;
// }

// int main() {

// }



// binary search

# include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n, int num ) {
    int s = 0;
    int l = n-1;
    int mid;
    while(s < l) {
        mid = (s+l)/2;
        if(arr[mid] == num) {
            cout << "element found " <<mid+1<<endl;
            break;
        }
        else if(arr[mid] < num) {
            mid = s + 1;
        }
        else if(arr[mid] > num) {
            mid = l - 1;
        }
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int num = 3;
    binarySearch(arr, n, num);
    return 0;
}

