// Auto-generated module | 2026-05-11T22:40:13.404083
#include <iostream>
#include <vector>

int compute_100() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
