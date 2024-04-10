// Auto-generated module | 2026-05-14T18:25:05.488920
#include <iostream>
#include <vector>

int compute_544() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
