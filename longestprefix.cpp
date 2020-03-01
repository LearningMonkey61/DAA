#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

string LCP(string X, string Y)
{
	int i = 0, j = 0;
	while (i < X.length() && j < Y.length())
	{
		if (X[i] != Y[j])
			break;

		i++, j++;
	}

	return X.substr(0, i);
}


string findLCP(vector<string> const &words)
{
	string prefix = words[0];
	for (string s: words)
		prefix = LCP(prefix, s);

	return prefix;
}

void CowboyBebop(){
    vector<string> words ;
    int n ;
    cin >> n ;
    string s ;
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        words.push_back(s);
    }
    cout << "Longest Common Prefix : " << findLCP(words);
}

using namespace std;
int main(void){
    std::ios_base::sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);



    int t  = 1 ;
    // cin >> t;

    while(t--){
        CowboyBebop();
    }

    return 0;
}


