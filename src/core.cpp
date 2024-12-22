// Auto-generated module | 2026-05-12T03:51:38.862071
#include <iostream>
#include <vector>

int compute_733() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
