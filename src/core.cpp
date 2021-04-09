// Auto-generated module | 2026-05-12T21:38:54.316348
#include <iostream>
#include <vector>

int compute_544() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
