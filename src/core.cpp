// Auto-generated module | 2026-05-11T21:46:19.299513
#include <iostream>
#include <vector>

int compute_324() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_324() << std::endl;
    return 0;
}
