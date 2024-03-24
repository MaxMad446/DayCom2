// Auto-generated module | 2026-05-11T22:31:39.011972
#include <iostream>
#include <vector>

int compute_221() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
