// Auto-generated module | 2026-05-12T21:34:00.073171
#include <iostream>
#include <vector>

int compute_445() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
