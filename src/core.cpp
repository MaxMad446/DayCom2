// Auto-generated module | 2026-05-12T20:42:44.274712
#include <iostream>
#include <vector>

int compute_118() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
