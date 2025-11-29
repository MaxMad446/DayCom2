// Auto-generated module | 2026-05-12T04:36:47.049895
#include <iostream>
#include <vector>

int compute_478() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
