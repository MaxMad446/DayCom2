// Auto-generated module | 2026-05-12T04:23:44.058058
#include <iostream>
#include <vector>

int compute_772() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
