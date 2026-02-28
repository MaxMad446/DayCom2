// Auto-generated module | 2026-05-12T04:49:24.758478
#include <iostream>
#include <vector>

int compute_690() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
