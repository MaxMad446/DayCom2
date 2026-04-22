// Auto-generated module | 2026-05-12T06:20:15.185806
#include <iostream>
#include <vector>

int compute_999() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
