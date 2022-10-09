// Auto-generated module | 2026-05-14T06:21:48.559290
#include <iostream>
#include <vector>

int compute_417() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
