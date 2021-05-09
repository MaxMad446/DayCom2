// Auto-generated module | 2026-05-12T20:45:29.721211
#include <iostream>
#include <vector>

int compute_940() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
