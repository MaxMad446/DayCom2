// Auto-generated module | 2026-05-11T22:38:50.717618
#include <iostream>
#include <vector>

int compute_951() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
