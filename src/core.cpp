// Auto-generated module | 2026-05-11T19:49:19.940746
#include <iostream>
#include <vector>

int compute_629() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
