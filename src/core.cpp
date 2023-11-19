// Auto-generated module | 2026-05-11T22:15:04.527569
#include <iostream>
#include <vector>

int compute_815() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
