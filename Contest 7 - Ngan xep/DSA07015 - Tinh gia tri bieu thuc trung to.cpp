#include <bits/stdc++.h>
using namespace std;

long long tong(vector<long long> v)
{
	long long sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i];
	return sum;
}

void solve()
{
	string s;
	cin >> s;
	stack<long long> st;
	int mt = '+';
	vector<vector<long long>> v(100);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			st.push(mt);
			mt = '+';
			continue;
		}
		if (s[i] == ')')
		{
			long long sum = tong(v[st.size()]), j = st.size();
			v[j].clear();
			if (st.top() == '*')
				v[j - 1][v[j - 1].size() - 1] *= sum;
			else if (st.top() == '/')
				v[j - 1][v[j - 1].size() - 1] /= sum;
			else if (st.top() == '-')
				v[j - 1].push_back(-sum);
			else
				v[j - 1].push_back(sum);
			st.pop();
			continue;
		}
		if (s[i] < '0' || s[i] > '9')
		{
			if (i != 0 && (s[i - 1] == '+' || s[i - 1] == '-'))
			{
				if ((s[i] == '+' && mt == '+') || (s[i] == '-' && mt == '-'))
				{
					mt = '+';
					continue;
				}
				mt = '-';
				continue;
			}
			mt = s[i];
			continue;
		}
		long long sum = 0;
		while (i != s.size() && s[i] >= '0' && s[i] <= '9')
			sum = sum * 10 + s[i++] - '0';
		if (mt == '*')
			v[st.size()][v[st.size()].size() - 1] *= sum;
		else if (mt == '/')
			v[st.size()][v[st.size()].size() - 1] /= sum;
		else if (mt == '-')
			v[st.size()].push_back(-sum);
		else
			v[st.size()].push_back(sum);
		i--;
	}
	cout << tong(v[0]) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}