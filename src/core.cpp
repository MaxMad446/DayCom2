// Auto-generated module | 2026-05-12T21:10:18.992854
#include <iostream>
#include <vector>

int compute_918() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
