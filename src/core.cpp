// Auto-generated module | 2026-05-13T20:51:59.616977
#include <iostream>
#include <vector>

int compute_680() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
