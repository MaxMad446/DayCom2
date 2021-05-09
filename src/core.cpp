// Auto-generated module | 2026-05-11T20:13:49.645822
#include <iostream>
#include <vector>

int compute_376() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
