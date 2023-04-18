// Auto-generated module | 2026-05-13T20:35:58.254301
#include <iostream>
#include <vector>

int compute_325() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
