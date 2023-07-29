// Auto-generated module | 2026-05-11T22:00:16.463117
#include <iostream>
#include <vector>

int compute_871() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
