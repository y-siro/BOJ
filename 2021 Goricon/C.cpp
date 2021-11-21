#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// Goricon C

string str,res="",temp="";
stack<string> s;
vector<string> v;
ll ans = 0;
bool checked = false;

string check(string str) {
	if (str == "ZERO") return "0";
	else if (str == "ONE") return "1";
	else if (str == "TWO") return "2";
	else if (str == "THREE") return "3";
	else if (str == "FOUR") return "4";
	else if (str == "FIVE") return "5";
	else if (str == "SIX") return "6";
	else if (str == "SEVEN") return "7";
	else if (str == "EIGHT") return "8";
	else if (str == "NINE") return "9";
	else if (str == "+") return "+";
	else if (str == "-") return "-";
	else if (str == "x") return "x";
	else if (str == "/") return "/";
	else if (str == "=") return "=";
	else return "-1";
}		

int main(void) {
	fast;
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if (!(str[i] >= 'A' and str[i] <= 'Z') and !(str[i] == '+' or str[i] == '-' or str[i] == 'x' or str[i] == '/' or str[i] == '=')) {
			cout << "Madness!"; return 0;
		}
		if ((str[i] == '+' or str[i] == '-' or str[i] == 'x' or str[i] == '/' or str[i] == '=') and !checked) checked = true;
		else if ((str[i] == '+' or str[i] == '-' or str[i] == 'x' or str[i] == '/' or str[i] == '=') and checked) {
			cout << "Madness!"; return 0;
		}
		else checked = false;
	}

	for (int i = 0; i < str.size(); ++i) {
		res += str[i];
		if (check(res) <= "9" and check(res) >= "0") {
			temp += check(res);
			v.push_back(check(res));
			res.clear();
		}
		else if (check(res) == "+" or check(res) == "-" or check(res) == "x" or check(res) == "/" or check(res) == "=") {
			temp += check(res);
			if (v.back() == "+" or v.back() == "-" or v.back() == "x" or v.back() == "/" or v.back() == "=") {
				cout << "Madness!"; return 0;
			}
			v.push_back(check(res));
			res.clear();
		}
		if (res.size() > 5) {
			cout << "Madness!"; return 0;
		}
	}
	cout << temp << "\n";
	ll ret = 0;
	res.clear();
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] >= "0" and v[i] <= "9") {
			res += v[i];
		}
		else if (v[i] == "+" or v[i] == "-" or v[i] == "x" or v[i] == "/") {
			if (s.empty()) {
				ans = stoi(res);
				s.push(v[i]);
				res.clear();
			}
			else {
				if (s.top() == "+") ans = ans + stoi(res);
				else if (s.top() == "-") ans = ans - stoi(res);
				else if (s.top() == "x") ans = ans * stoi(res);
				else if (s.top() == "/") ans = ans / stoi(res);

				res.clear();
				s.pop();
				s.push(v[i]);
			}
		}
		else {
			if (s.empty()) ans = stoi(res);
			else {
				if (s.top() == "+") ans = ans + stoi(res);
				else if (s.top() == "-") ans = ans - stoi(res);
				else if (s.top() == "x") ans = ans * stoi(res);
				else if (s.top() == "/") ans = ans / stoi(res);
			}			
		}
	}

	string ch = to_string(ans);
	for (int i = 0; i < ch.size(); ++i) {
		if (ch[i] == '0') cout << "ZERO";
		else if (ch[i] == '1') cout << "ONE";
		else if (ch[i] == '2') cout << "TWO";
		else if (ch[i] == '3') cout << "THREE";
		else if (ch[i] == '4') cout << "FOUR";
		else if (ch[i] == '5') cout << "FIVE";
		else if (ch[i] == '6') cout << "SIX";
		else if (ch[i] == '7') cout << "SEVEN";
		else if (ch[i] == '8') cout << "EIGHT";
		else if (ch[i] == '9') cout << "NINE";
		else cout << ch[i];
	}
}
