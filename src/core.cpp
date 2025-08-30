// Auto-generated module | 2026-05-12T21:28:51.018655
#include <iostream>
#include <vector>

int compute_733() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
