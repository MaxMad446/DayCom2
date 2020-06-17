// Auto-generated module | 2026-05-11T19:31:33.621425
#include <iostream>
#include <vector>

int compute_263() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
