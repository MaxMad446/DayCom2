// Auto-generated module | 2026-05-12T04:09:00.224286
#include <iostream>
#include <vector>

int compute_399() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
