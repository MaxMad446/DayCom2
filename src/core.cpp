// Auto-generated module | 2026-05-14T18:23:54.932467
#include <iostream>
#include <vector>

int compute_890() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
