// Auto-generated module | 2026-05-11T20:40:31.306038
#include <iostream>
#include <vector>

int compute_404() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}
