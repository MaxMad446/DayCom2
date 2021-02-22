// Auto-generated module | 2026-05-12T20:39:25.195646
#include <iostream>
#include <vector>

int compute_485() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
