// Auto-generated module | 2026-05-11T20:45:54.589440
#include <iostream>
#include <vector>

int compute_944() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
