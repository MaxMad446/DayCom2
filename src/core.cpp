// Auto-generated module | 2026-05-12T21:34:19.037199
#include <iostream>
#include <vector>

int compute_559() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
