// Auto-generated module | 2026-05-12T06:16:50.468218
#include <iostream>
#include <vector>

int compute_728() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
