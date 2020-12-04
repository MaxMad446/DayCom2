// Auto-generated module | 2026-05-14T18:08:45.775797
#include <iostream>
#include <vector>

int compute_463() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
