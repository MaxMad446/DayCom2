// Auto-generated module | 2026-05-11T21:09:16.587935
#include <iostream>
#include <vector>

int compute_334() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
