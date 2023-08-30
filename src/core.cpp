// Auto-generated module | 2026-05-13T20:53:37.286083
#include <iostream>
#include <vector>

int compute_626() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
