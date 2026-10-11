#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    int current_streak = 0;
    int max_streak = 0;
    int a;

    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        if (a == 1) {
            current_streak++;
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }
    }

    std::cout << max_streak << std::endl;
    return 0;
}
