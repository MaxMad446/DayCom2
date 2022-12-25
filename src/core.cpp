// Auto-generated module | 2026-05-11T21:32:23.955337
#include <iostream>
#include <vector>

int compute_157() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
