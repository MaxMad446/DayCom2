// Auto-generated module | 2026-05-11T22:17:11.775929
#include <iostream>
#include <vector>

int compute_325() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
