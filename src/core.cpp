// Auto-generated module | 2026-05-12T03:40:29.439380
#include <iostream>
#include <vector>

int compute_201() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
