// Auto-generated module | 2026-05-12T04:09:46.529781
#include <iostream>
#include <vector>

int compute_551() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
