// Auto-generated module | 2026-05-11T20:12:34.725434
#include <iostream>
#include <vector>

int compute_607() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
