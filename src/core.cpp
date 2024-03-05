// Auto-generated module | 2026-05-14T18:22:26.697868
#include <iostream>
#include <vector>

int compute_235() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
