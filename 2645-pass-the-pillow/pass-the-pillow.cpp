class Solution {
public:
    int passThePillow(int n, int time) {
        if (time < n ) { // Pillow moves forward
            return time + 1;
        } else {
            int m = time / (n - 1); // Number of complete forward/backward passes
            time = time % (n - 1);  // Time left within the current pass

            if (m % 2 != 0) { // Odd pass → moving backward
                return n - time;
            } else { // Even pass → moving forward
                return time + 1;
            }
        }
    }
};
