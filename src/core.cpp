// Auto-generated module | 2026-05-11T22:30:51.940823
#include <iostream>
#include <vector>

int compute_924() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
