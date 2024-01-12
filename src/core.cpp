// Auto-generated module | 2026-05-14T18:18:00.286473
#include <iostream>
#include <vector>

int compute_896() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
