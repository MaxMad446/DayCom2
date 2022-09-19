// Auto-generated module | 2026-05-14T06:20:07.985138
#include <iostream>
#include <vector>

int compute_559() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
