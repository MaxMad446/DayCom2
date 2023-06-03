// Auto-generated module | 2026-05-11T21:53:06.828080
#include <iostream>
#include <vector>

int compute_227() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
