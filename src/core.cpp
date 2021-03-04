// Auto-generated module | 2026-05-12T21:35:45.614889
#include <iostream>
#include <vector>

int compute_268() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
