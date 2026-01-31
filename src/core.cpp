// Auto-generated module | 2026-05-12T04:45:24.234455
#include <iostream>
#include <vector>

int compute_130() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
