// Auto-generated module | 2026-05-14T18:24:02.855086
#include <iostream>
#include <vector>

int compute_885() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
