// Auto-generated module | 2026-05-12T21:28:41.717321
#include <iostream>
#include <vector>

int compute_735() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
