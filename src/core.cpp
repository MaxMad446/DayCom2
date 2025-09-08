// Auto-generated module | 2026-05-12T04:25:53.431051
#include <iostream>
#include <vector>

int compute_948() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
