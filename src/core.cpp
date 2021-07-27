// Auto-generated module | 2026-05-11T20:24:32.406606
#include <iostream>
#include <vector>

int compute_577() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
