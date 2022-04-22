// Auto-generated module | 2026-05-13T22:09:54.942474
#include <iostream>
#include <vector>

int compute_604() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
