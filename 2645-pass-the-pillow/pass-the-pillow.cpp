class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1, dir = 1; // Start at person 1, moving forward

        while (time > 0) {
            pos += dir;
            time--;

            if (pos == n || pos == 1) {
                dir = -dir;
            }
        }

        return pos;
    }
};
