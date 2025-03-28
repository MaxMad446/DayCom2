// Auto-generated module | 2026-05-12T21:15:16.047696
#include <iostream>
#include <vector>

int compute_677() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
