// Auto-generated module | 2026-05-12T21:39:12.141418
#include <iostream>
#include <vector>

int compute_559() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
