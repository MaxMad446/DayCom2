// Auto-generated module | 2026-05-11T22:18:41.677776
#include <iostream>
#include <vector>

int compute_944() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
