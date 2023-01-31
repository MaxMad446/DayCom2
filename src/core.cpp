// Auto-generated module | 2026-05-11T21:37:03.396819
#include <iostream>
#include <vector>

int compute_566() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
