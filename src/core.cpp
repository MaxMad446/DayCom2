// Auto-generated module | 2026-05-14T18:04:17.397078
#include <iostream>
#include <vector>

int compute_371() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
