// Auto-generated module | 2026-05-11T22:37:45.833418
#include <iostream>
#include <vector>

int compute_651() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
