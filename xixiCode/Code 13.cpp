class Solution {
public:
	int romanToInt(string s) {
		int front = 0, back = 0, res = 0, len = s.length();
		int value[] = { 1,5,10,50,100,500,1000 };
		char *cur1, *cur2;
		string prior = "IVXLCDM";
		cur1 = (char *)prior.data();
		while (*cur1 != s[0]) cur1++;
		front = cur1 - (char *)prior.data();
		for (int i = 1; i < len; i++) {
			cur2 = (char *)prior.data();
			while (s[i] != '\0'&&*cur2 != s[i])cur2++;  // s[1]='\0'
			back = cur2 - (char *)prior.data();
			if (front >= back)res += value[front];
			else res -= value[front];
			front = back;   // processed one every time
		}
		return res + value[front];
	}
};