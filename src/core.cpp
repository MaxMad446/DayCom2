// Auto-generated module | 2026-05-14T18:24:01.563967
#include <iostream>
#include <vector>

int compute_663() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
