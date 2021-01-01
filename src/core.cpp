// Auto-generated module | 2026-05-12T21:30:43.526499
#include <iostream>
#include <vector>

int compute_690() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
