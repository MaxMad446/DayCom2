// Auto-generated module | 2026-05-11T21:48:26.146798
#include <iostream>
#include <vector>

int compute_308() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
