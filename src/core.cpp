// Auto-generated module | 2026-05-13T22:02:49.818616
#include <iostream>
#include <vector>

int compute_768() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
