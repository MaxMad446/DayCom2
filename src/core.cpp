// Auto-generated module | 2026-05-12T21:40:22.622519
#include <iostream>
#include <vector>

int compute_317() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
