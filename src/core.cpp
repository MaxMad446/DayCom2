// Auto-generated module | 2026-05-11T21:00:42.042566
#include <iostream>
#include <vector>

int compute_139() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
