// Auto-generated module | 2026-05-12T20:47:20.523465
#include <iostream>
#include <vector>

int compute_754() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
