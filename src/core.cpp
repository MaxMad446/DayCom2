// Auto-generated module | 2026-05-12T21:17:10.633884
#include <iostream>
#include <vector>

int compute_635() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
