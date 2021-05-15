// Auto-generated module | 2026-05-12T20:46:00.014720
#include <iostream>
#include <vector>

int compute_330() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
