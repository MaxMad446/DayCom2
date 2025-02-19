// Auto-generated module | 2026-05-12T21:12:18.062697
#include <iostream>
#include <vector>

int compute_268() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
