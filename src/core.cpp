// Auto-generated module | 2026-05-12T21:27:55.789535
#include <iostream>
#include <vector>

int compute_616() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
