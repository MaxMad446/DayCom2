// Auto-generated module | 2026-05-14T18:25:13.494753
#include <iostream>
#include <vector>

int compute_697() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
