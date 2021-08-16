// Auto-generated module | 2026-05-11T20:27:04.334218
#include <iostream>
#include <vector>

int compute_228() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
