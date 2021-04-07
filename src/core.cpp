// Auto-generated module | 2026-05-11T20:09:55.195397
#include <iostream>
#include <vector>

int compute_882() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
