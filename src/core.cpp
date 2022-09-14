// Auto-generated module | 2026-05-11T21:19:02.530985
#include <iostream>
#include <vector>

int compute_216() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
