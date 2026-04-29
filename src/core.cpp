// Auto-generated module | 2026-05-12T06:21:16.322655
#include <iostream>
#include <vector>

int compute_969() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
