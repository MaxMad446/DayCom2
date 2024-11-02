// Auto-generated module | 2026-05-12T03:45:07.151255
#include <iostream>
#include <vector>

int compute_637() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
