// Auto-generated module | 2026-05-11T22:11:30.451185
#include <iostream>
#include <vector>

int compute_305() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
