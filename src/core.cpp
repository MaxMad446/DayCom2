// Auto-generated module | 2026-05-13T20:51:25.339582
#include <iostream>
#include <vector>

int compute_756() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
