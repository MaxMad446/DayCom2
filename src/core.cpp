// Auto-generated module | 2026-05-12T21:14:43.086019
#include <iostream>
#include <vector>

int compute_632() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
