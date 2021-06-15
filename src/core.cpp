// Auto-generated module | 2026-05-11T20:18:52.769224
#include <iostream>
#include <vector>

int compute_103() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
