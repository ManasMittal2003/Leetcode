class Solution {
public:
    int kthGrammar(int N, int K) {
        if (N == 1) {
            return 0;
        }
        int parent = kthGrammar(N - 1, (K + 1) / 2); // Calculate the parent value
        if (K % 2 == 0) {
            // If K is even, the node is the right child of its parent
            return (parent == 0) ? 1 : 0;
        } else {
            // If K is odd, the node is the left child of its parent
            return parent;
        }
    }
};
