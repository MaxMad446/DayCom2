// Auto-generated module | 2026-05-12T20:46:11.909881
#include <iostream>
#include <vector>

int compute_736() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
