// Auto-generated module | 2026-05-14T18:19:41.475672
#include <iostream>
#include <vector>

int compute_885() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
