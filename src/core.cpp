// Auto-generated module | 2026-05-13T20:48:14.607322
#include <iostream>
#include <vector>

int compute_582() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
