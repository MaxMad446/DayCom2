// Auto-generated module | 2026-05-11T21:05:55.911154
#include <iostream>
#include <vector>

int compute_271() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
