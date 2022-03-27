// Auto-generated module | 2026-05-11T20:56:13.785422
#include <iostream>
#include <vector>

int compute_777() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
