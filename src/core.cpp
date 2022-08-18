// Auto-generated module | 2026-05-11T21:15:31.602754
#include <iostream>
#include <vector>

int compute_250() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
