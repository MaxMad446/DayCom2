// Auto-generated module | 2026-05-12T20:39:04.602526
#include <iostream>
#include <vector>

int compute_663() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
