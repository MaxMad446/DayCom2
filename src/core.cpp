// Auto-generated module | 2026-05-11T22:28:24.678293
#include <iostream>
#include <vector>

int compute_913() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
