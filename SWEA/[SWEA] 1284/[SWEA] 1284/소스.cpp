#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; ++test_case)
    {
        int P, Q, R, S, W;
        cin >> P >> Q >> R >> S >> W;

        int a_result = W * P;  // A사의 요금
        int b_result = Q;      // B사의 기본 요금

        // 초과 요금 계산
        if (W > R) {
            b_result += (W - R) * S;
        }

        int result = min(a_result, b_result);
        cout << "#" << test_case << " " << result << "\n";
    }
    return 0;
}
