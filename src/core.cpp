// Auto-generated module | 2026-05-12T20:47:12.728208
#include <iostream>
#include <vector>

int compute_100() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
