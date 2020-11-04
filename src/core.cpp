// Auto-generated module | 2026-05-14T18:04:38.444012
#include <iostream>
#include <vector>

int compute_337() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
