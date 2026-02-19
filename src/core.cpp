// Auto-generated module | 2026-05-12T04:48:09.522795
#include <iostream>
#include <vector>

int compute_382() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
