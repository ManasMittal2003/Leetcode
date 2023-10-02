// class Solution {
// public:
//     bool winnerOfGame(string colors) {
//         if(colors.length()==1){
//             return false;
//         }
//         while(true){
//             int i=1;
//             while(i<(colors.length()-1)){
//                 if(colors[i]!='B'&&colors[i-1]=='A'&&colors[i+1]=='A'){
//                     colors.erase(i,1);
//                     break;
//                 }
//                 i++;
//             }
//             if(i==(colors.length()-1)){
//                 return false;
//             }
//             i=1;
//             while(i<(colors.length()-1)){
//                 if(colors[i]!='A'&&colors[i-1]=='B'&&colors[i+1]=='B'){
//                     colors.erase(i,1);
//                     break;
//                 }
//                 i++;
//             }
//             if(i==(colors.length()-1)){
//                 return true;
//             }
//         }
//         return 0;
//     }
// };
class Solution {
public:
    bool winnerOfGame(string colors) {
        int aCount = 0;
        int bCount = 0;
        
        for (int i = 0; i < colors.length(); i++) {
            if (colors[i] == 'A') {
                int j = i;
                while (j < colors.length() && colors[j] == 'A') {
                    j++;
                }
                int consecutiveA = j - i;
                if (consecutiveA >= 3) {
                    aCount += consecutiveA - 2;
                }
                i = j - 1;
            } else if (colors[i] == 'B') {
                int j = i;
                while (j < colors.length() && colors[j] == 'B') {
                    j++;
                }
                int consecutiveB = j - i;
                if (consecutiveB >= 3) {
                    bCount += consecutiveB - 2;
                }
                i = j - 1;
            }
        }
        
        return aCount > bCount;
    }
};
