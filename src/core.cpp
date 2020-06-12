// Auto-generated module | 2026-05-11T19:30:52.583145
#include <iostream>
#include <vector>

int compute_799() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
