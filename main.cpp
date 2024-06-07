#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {

    if(vec.size()==M){
	for(int i=0; i<M; i++){
	    cout << vec[i];
        }
        cout << endl;
        return;
    }
    for(int i=start+1; i<=N; ++i){
	vec.push_back(i);
        func(i+1);
	vec.pop_back();
    }

}

int main() {
   cin >> N >> M;
   func(0);
}
//한 학기간 고생하셨습니다:)
