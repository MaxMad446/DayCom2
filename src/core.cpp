// Auto-generated module | 2026-05-11T19:31:25.473062
#include <iostream>
#include <vector>

int compute_761() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
