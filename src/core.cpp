// Auto-generated module | 2026-05-12T20:49:22.747459
#include <iostream>
#include <vector>

int compute_202() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
