// Auto-generated module | 2026-05-12T21:22:24.518193
#include <iostream>
#include <vector>

int compute_415() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
