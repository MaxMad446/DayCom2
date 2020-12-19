// Auto-generated module | 2026-05-14T18:10:53.403299
#include <iostream>
#include <vector>

int compute_663() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
