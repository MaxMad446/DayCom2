// Auto-generated module | 2026-05-11T21:57:17.207626
#include <iostream>
#include <vector>

int compute_914() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
