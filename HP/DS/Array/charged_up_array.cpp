#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int solve (vector<long long> A) {
	int size = A.size();
	if(size>63)
	{
		return 0;
	}
	long long power = 1ll<<size-1;
	int sum = 0;
	for(int j=0; j<size; j++)
	{
		if(A[j]>=power )
		{
			sum = (sum + A[j]%MOD)%MOD;	
		}
	}
	return sum;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A);
        cout << out_;
        cout <<"\n";
    }
}
