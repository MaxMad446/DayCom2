// Auto-generated module | 2026-05-12T04:18:26.937728
#include <iostream>
#include <vector>

int compute_772() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
