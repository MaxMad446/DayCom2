// Auto-generated module | 2026-05-14T06:24:44.962310
#include <iostream>
#include <vector>

int compute_193() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
