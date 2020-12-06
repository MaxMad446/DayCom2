// Auto-generated module | 2026-05-14T18:09:03.961816
#include <iostream>
#include <vector>

int compute_888() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
