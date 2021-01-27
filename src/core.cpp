// Auto-generated module | 2026-05-14T18:15:57.875602
#include <iostream>
#include <vector>

int compute_517() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
