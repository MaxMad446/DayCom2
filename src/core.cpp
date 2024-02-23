// Auto-generated module | 2026-05-14T18:21:33.437834
#include <iostream>
#include <vector>

int compute_245() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
