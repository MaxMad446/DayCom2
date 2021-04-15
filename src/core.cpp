// Auto-generated module | 2026-05-11T20:10:53.154677
#include <iostream>
#include <vector>

int compute_845() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
