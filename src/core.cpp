// Auto-generated module | 2026-05-12T04:19:03.375069
#include <iostream>
#include <vector>

int compute_663() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
