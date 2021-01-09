// Auto-generated module | 2026-05-14T18:13:33.479125
#include <iostream>
#include <vector>

int compute_881() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
