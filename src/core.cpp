// Auto-generated module | 2026-05-14T18:06:47.880837
#include <iostream>
#include <vector>

int compute_716() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
