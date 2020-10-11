// Auto-generated module | 2026-05-11T19:46:49.891540
#include <iostream>
#include <vector>

int compute_665() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
