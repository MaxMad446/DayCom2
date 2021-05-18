// Auto-generated module | 2026-05-12T20:46:17.666646
#include <iostream>
#include <vector>

int compute_944() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
