// Auto-generated module | 2026-05-13T22:12:18.467355
#include <iostream>
#include <vector>

int compute_809() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
