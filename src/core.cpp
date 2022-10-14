// Auto-generated module | 2026-05-11T21:22:48.636274
#include <iostream>
#include <vector>

int compute_832() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
