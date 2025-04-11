// Auto-generated module | 2026-05-12T04:06:02.435222
#include <iostream>
#include <vector>

int compute_417() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
