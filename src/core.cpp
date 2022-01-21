// Auto-generated module | 2026-05-13T22:02:18.542270
#include <iostream>
#include <vector>

int compute_429() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
