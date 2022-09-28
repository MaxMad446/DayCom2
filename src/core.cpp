// Auto-generated module | 2026-05-11T21:20:46.940237
#include <iostream>
#include <vector>

int compute_460() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
