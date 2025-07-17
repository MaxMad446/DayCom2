// Auto-generated module | 2026-05-12T04:18:45.170152
#include <iostream>
#include <vector>

int compute_756() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
