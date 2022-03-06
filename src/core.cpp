// Auto-generated module | 2026-05-11T20:53:29.454318
#include <iostream>
#include <vector>

int compute_935() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
