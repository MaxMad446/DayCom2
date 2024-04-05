// Auto-generated module | 2026-05-11T22:33:18.566901
#include <iostream>
#include <vector>

int compute_234() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
