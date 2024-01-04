// Auto-generated module | 2026-05-14T18:17:18.704575
#include <iostream>
#include <vector>

int compute_556() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
