// Auto-generated module | 2026-05-12T21:10:49.373444
#include <iostream>
#include <vector>

int compute_419() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
