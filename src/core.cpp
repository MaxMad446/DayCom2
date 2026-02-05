// Auto-generated module | 2026-05-12T04:46:09.506947
#include <iostream>
#include <vector>

int compute_235() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
