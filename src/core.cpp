// Auto-generated module | 2026-05-11T21:36:05.190638
#include <iostream>
#include <vector>

int compute_417() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
