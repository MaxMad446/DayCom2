// Auto-generated module | 2026-05-12T04:37:20.642367
#include <iostream>
#include <vector>

int compute_133() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
