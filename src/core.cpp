// Auto-generated module | 2026-05-13T20:35:46.775336
#include <iostream>
#include <vector>

int compute_944() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
