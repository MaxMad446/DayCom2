// Auto-generated module | 2026-05-13T21:01:58.419611
#include <iostream>
#include <vector>

int compute_193() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
