// Auto-generated module | 2026-05-11T22:51:40.537984
#include <iostream>
#include <vector>

int compute_568() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
