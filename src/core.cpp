// Auto-generated module | 2026-05-14T18:18:43.318955
#include <iostream>
#include <vector>

int compute_306() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
