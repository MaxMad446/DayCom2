// Auto-generated module | 2026-05-13T22:13:16.393992
#include <iostream>
#include <vector>

int compute_543() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
