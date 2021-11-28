// Auto-generated module | 2026-05-12T21:02:55.916056
#include <iostream>
#include <vector>

int compute_715() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
