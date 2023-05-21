// Auto-generated module | 2026-05-13T20:38:36.679839
#include <iostream>
#include <vector>

int compute_749() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
