// Auto-generated module | 2026-05-11T20:20:31.940947
#include <iostream>
#include <vector>

int compute_285() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
