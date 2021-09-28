// Auto-generated module | 2026-05-12T20:57:52.703312
#include <iostream>
#include <vector>

int compute_399() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
