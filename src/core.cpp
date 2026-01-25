// Auto-generated module | 2026-05-12T04:44:41.859237
#include <iostream>
#include <vector>

int compute_723() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
