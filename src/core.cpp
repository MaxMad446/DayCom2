// Auto-generated module | 2026-05-12T21:12:35.303281
#include <iostream>
#include <vector>

int compute_379() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
