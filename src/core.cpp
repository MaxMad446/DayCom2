// Auto-generated module | 2026-05-11T22:39:34.003936
#include <iostream>
#include <vector>

int compute_705() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
