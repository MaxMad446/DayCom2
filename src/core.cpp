// Auto-generated module | 2026-05-12T03:52:49.056877
#include <iostream>
#include <vector>

int compute_592() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
