// Auto-generated module | 2026-05-11T20:23:59.673779
#include <iostream>
#include <vector>

int compute_721() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
