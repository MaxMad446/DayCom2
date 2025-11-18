// Auto-generated module | 2026-05-12T04:35:20.083228
#include <iostream>
#include <vector>

int compute_832() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
