// Auto-generated module | 2026-05-14T18:24:39.717397
#include <iostream>
#include <vector>

int compute_239() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
