// Auto-generated module | 2026-05-12T20:38:09.518499
#include <iostream>
#include <vector>

int compute_430() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
