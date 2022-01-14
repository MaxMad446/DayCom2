// Auto-generated module | 2026-05-11T20:46:53.808193
#include <iostream>
#include <vector>

int compute_126() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
