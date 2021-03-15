#include <iostream>
#include <vector>

using namespace std;

int Answer;

int main(int argc, char** argv){
    int T, test_case;
    int n,k;
    cin >> T;
    for(test_case = 0; test_case  < T; test_case++)
    {
        cin>>n>>k;
        vector<int> aStoreCalorie(n);
        vector<int> bStoreCalorie(n);
        for(int i=0;i<n;i++) cin>>aStoreCalorie[i];
        for(int i=0;i<n;i++) cin>>bStoreCalorie[i];
        sort(aStoreCalorie.begin(),aStoreCalorie.end());
        sort(bStoreCalorie.begin(),bStoreCalorie.end());
        Answer = 0;
        for(int i=0;i<k;i++){
            Answer=max(Answer,aStoreCalorie[i]+bStoreCalorie[k-i-1]);
        }

        cout << "Case #" << test_case+1 << endl;
        cout << Answer << endl;
    }

    return 0;//Your program should return 0 on normal termination.
}