// Auto-generated module | 2026-05-11T21:12:46.310218
#include <iostream>
#include <vector>

int compute_931() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
