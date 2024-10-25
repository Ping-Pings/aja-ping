// [01] 2751번 : 수 정렬하기 2 - Silver 5

// 입력 : 첫째 줄에 수의 개수가 주어지고, 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000,000보다 작거나 같은 정수. 수는 중복되지 않는다.
// 출력 : 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n, tmp; vector<int> v;
    cin >> n;


    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());
    return 0;
}
