// Auto-generated module | 2026-05-12T06:19:58.718742
#include <iostream>
#include <vector>

int compute_323() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
