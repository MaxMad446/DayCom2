// Auto-generated module | 2026-05-11T19:54:01.945531
#include <iostream>
#include <vector>

int compute_973() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
