// Auto-generated module | 2026-05-12T21:21:45.516876
#include <iostream>
#include <vector>

int compute_895() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
