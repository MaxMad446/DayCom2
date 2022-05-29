// Auto-generated module | 2026-05-11T21:04:39.474380
#include <iostream>
#include <vector>

int compute_376() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
