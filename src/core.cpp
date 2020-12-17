// Auto-generated module | 2026-05-12T20:02:15.795697
#include <iostream>
#include <vector>

int compute_228() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
