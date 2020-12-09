// Auto-generated module | 2026-05-14T18:09:28.949991
#include <iostream>
#include <vector>

int compute_842() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
