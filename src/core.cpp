// Auto-generated module | 2026-05-12T21:33:52.996399
#include <iostream>
#include <vector>

int compute_554() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
