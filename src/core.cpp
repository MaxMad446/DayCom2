// Auto-generated module | 2026-05-14T18:20:53.127857
#include <iostream>
#include <vector>

int compute_494() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
