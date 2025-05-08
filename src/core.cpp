// Auto-generated module | 2026-05-12T21:18:43.134457
#include <iostream>
#include <vector>

int compute_294() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
