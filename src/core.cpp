// Auto-generated module | 2026-05-11T22:28:10.095076
#include <iostream>
#include <vector>

int compute_261() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
