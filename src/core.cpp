// Auto-generated module | 2026-05-14T18:03:20.712103
#include <iostream>
#include <vector>

int compute_860() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
