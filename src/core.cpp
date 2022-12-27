// Auto-generated module | 2026-05-11T21:32:39.493639
#include <iostream>
#include <vector>

int compute_610() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
