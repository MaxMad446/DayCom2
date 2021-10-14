// Auto-generated module | 2026-05-12T20:59:00.931833
#include <iostream>
#include <vector>

int compute_507() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
