// Auto-generated module | 2026-05-12T04:18:21.252023
#include <iostream>
#include <vector>

int compute_137() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
