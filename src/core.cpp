// Auto-generated module | 2026-05-12T21:24:03.448493
#include <iostream>
#include <vector>

int compute_852() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
