// Auto-generated module | 2026-05-14T18:28:01.760240
#include <iostream>
#include <vector>

int compute_606() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
