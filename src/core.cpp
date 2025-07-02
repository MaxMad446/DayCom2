// Auto-generated module | 2026-05-12T04:16:46.684688
#include <iostream>
#include <vector>

int compute_321() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
