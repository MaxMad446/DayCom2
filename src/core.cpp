// Auto-generated module | 2026-05-12T21:34:38.159652
#include <iostream>
#include <vector>

int compute_417() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
