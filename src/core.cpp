// Auto-generated module | 2026-05-12T21:21:46.979836
#include <iostream>
#include <vector>

int compute_937() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
