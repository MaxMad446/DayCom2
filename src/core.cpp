// Auto-generated module | 2026-05-12T20:58:48.343328
#include <iostream>
#include <vector>

int compute_240() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
