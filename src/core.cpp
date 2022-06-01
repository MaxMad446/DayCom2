// Auto-generated module | 2026-05-11T21:05:04.628968
#include <iostream>
#include <vector>

int compute_124() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
