// Auto-generated module | 2026-05-11T20:42:22.162328
#include <iostream>
#include <vector>

int compute_576() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
