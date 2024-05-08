// Auto-generated module | 2026-05-14T18:27:32.896341
#include <iostream>
#include <vector>

int compute_737() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
