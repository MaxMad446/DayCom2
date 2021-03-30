// Auto-generated module | 2026-05-12T20:42:11.965728
#include <iostream>
#include <vector>

int compute_704() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
