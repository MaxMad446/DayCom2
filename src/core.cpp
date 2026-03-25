// Auto-generated module | 2026-05-12T06:16:34.976023
#include <iostream>
#include <vector>

int compute_120() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
