// Auto-generated module | 2026-05-12T03:56:27.969010
#include <iostream>
#include <vector>

int compute_173() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
