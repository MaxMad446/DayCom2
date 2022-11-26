// Auto-generated module | 2026-05-14T06:25:46.993019
#include <iostream>
#include <vector>

int compute_193() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
