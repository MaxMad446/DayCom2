// Auto-generated module | 2026-05-12T20:50:08.947987
#include <iostream>
#include <vector>

int compute_474() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
