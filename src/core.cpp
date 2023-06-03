// Auto-generated module | 2026-05-13T20:46:27.976767
#include <iostream>
#include <vector>

int compute_454() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
