// Auto-generated module | 2026-05-11T19:56:08.278370
#include <iostream>
#include <vector>

int compute_273() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
