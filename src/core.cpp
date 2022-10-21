// Auto-generated module | 2026-05-14T06:22:49.499556
#include <iostream>
#include <vector>

int compute_716() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
