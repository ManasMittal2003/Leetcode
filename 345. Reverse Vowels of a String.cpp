class Solution {
public:
    string reverseVowels(string s) {
        int st=0,e=s.length()-1;
        while(st<e){
            if((s[st]!='a'&&s[st]!='e'&&s[st]!='o'&&s[st]!='i'&&s[st]!='u')&&
            (s[st]!='A'&&s[st]!='E'&&s[st]!='O'&&s[st]!='I'&&s[st]!='U')){
                st++;
            }
            else if((s[e]!='a'&&s[e]!='e'&&s[e]!='o'&&s[e]!='i'&&s[e]!='u')&&
            (s[e]!='A'&&s[e]!='E'&&s[e]!='O'&&s[e]!='I'&&s[e]!='U')){
                e--;
            }
            else{
                swap(s[st++],s[e--]);
            }
        }
        return s;
    }
};
