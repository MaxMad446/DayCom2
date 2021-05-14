// Auto-generated module | 2026-05-11T20:14:32.065318
#include <iostream>
#include <vector>

int compute_100() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_100() << std::endl;
    return 0;
}
