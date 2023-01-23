// Auto-generated module | 2026-05-13T20:28:42.451477
#include <iostream>
#include <vector>

int compute_365() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
