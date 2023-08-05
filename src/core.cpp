// Auto-generated module | 2026-05-13T20:51:31.457513
#include <iostream>
#include <vector>

int compute_914() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
