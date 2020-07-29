// Auto-generated module | 2026-05-11T19:36:55.446651
#include <iostream>
#include <vector>

int compute_326() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
