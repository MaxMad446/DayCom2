// Auto-generated module | 2026-05-12T21:28:39.260826
#include <iostream>
#include <vector>

int compute_300() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
