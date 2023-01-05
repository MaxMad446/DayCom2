// Auto-generated module | 2026-05-11T21:33:50.896422
#include <iostream>
#include <vector>

int compute_227() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
