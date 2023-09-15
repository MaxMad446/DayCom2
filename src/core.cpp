// Auto-generated module | 2026-05-11T22:06:30.388809
#include <iostream>
#include <vector>

int compute_167() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
