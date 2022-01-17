// Auto-generated module | 2026-05-13T22:01:55.316374
#include <iostream>
#include <vector>

int compute_576() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
