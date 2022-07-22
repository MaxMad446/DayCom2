// Auto-generated module | 2026-05-11T21:12:02.640024
#include <iostream>
#include <vector>

int compute_271() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
