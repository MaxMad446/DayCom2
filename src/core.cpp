// Auto-generated module | 2026-05-12T04:06:54.407729
#include <iostream>
#include <vector>

int compute_592() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
