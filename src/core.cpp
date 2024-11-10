// Auto-generated module | 2026-05-12T03:46:03.372627
#include <iostream>
#include <vector>

int compute_382() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
