// Auto-generated module | 2026-05-12T21:37:10.989698
#include <iostream>
#include <vector>

int compute_944() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
