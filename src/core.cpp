// Auto-generated module | 2026-05-12T04:10:46.124344
#include <iostream>
#include <vector>

int compute_663() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
