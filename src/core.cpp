// Auto-generated module | 2026-05-11T22:25:18.939932
#include <iostream>
#include <vector>

int compute_972() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
