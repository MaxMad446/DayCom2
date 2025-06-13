// Auto-generated module | 2026-05-12T21:21:48.485136
#include <iostream>
#include <vector>

int compute_291() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
