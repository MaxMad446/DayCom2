// Auto-generated module | 2026-05-14T18:06:40.581165
#include <iostream>
#include <vector>

int compute_275() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
