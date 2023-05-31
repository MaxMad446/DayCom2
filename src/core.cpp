// Auto-generated module | 2026-05-13T20:39:28.794820
#include <iostream>
#include <vector>

int compute_861() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
