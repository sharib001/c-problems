class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int j = 0; j < s.length(); j++){
        if (s[j] == 'C' && s[j + 1] == 'M')
        {
            sum += 900;
            j++;
        }
        else if (s[j] == 'C' && s[j + 1] == 'D')
        {
            sum += 400;
            j++;
        }
        else if (s[j] == 'X' && s[j + 1] == 'C')
        {
            sum += 90;
            j++;
        }
        else if (s[j] == 'X' && s[j + 1] == 'L')
        {
            sum += 40;
            j++;
        }

        else if (s[j] == 'I' && s[j + 1] == 'V')
        {
            sum += 4;
            j++;
        }
        else if (s[j] == 'I' && s[j + 1] == 'X')
        {
            sum += 9;
            j++;
        }
        else if (s[j] == 'I')
            sum += 1;
        else if (s[j] == 'V')
            sum += 5;
        else if (s[j] == 'X')
            sum += 10;
        else if (s[j] == 'L')
            sum += 50;
        else if (s[j] == 'C')
            sum += 100;
        else if (s[j] == 'D')
            sum += 500;
        else if (s[j] == 'M')
            sum += 1000;
    }
    return sum;
    }
};