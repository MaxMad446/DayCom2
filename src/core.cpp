// Auto-generated module | 2026-05-14T18:18:01.240920
#include <iostream>
#include <vector>

int compute_568() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
