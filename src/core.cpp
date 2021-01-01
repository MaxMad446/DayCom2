// Auto-generated module | 2026-05-12T21:30:42.579839
#include <iostream>
#include <vector>

int compute_751() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
