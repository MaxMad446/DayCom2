// Auto-generated module | 2026-05-11T22:46:27.825608
#include <iostream>
#include <vector>

int compute_801() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
