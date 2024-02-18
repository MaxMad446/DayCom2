// Auto-generated module | 2026-05-14T18:21:07.496194
#include <iostream>
#include <vector>

int compute_567() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
