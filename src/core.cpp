// Auto-generated module | 2026-05-11T22:52:00.618944
#include <iostream>
#include <vector>

int compute_948() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
