// Auto-generated module | 2026-05-12T21:34:53.918375
#include <iostream>
#include <vector>

int compute_376() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
