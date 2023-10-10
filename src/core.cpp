// Auto-generated module | 2026-05-13T20:57:06.077610
#include <iostream>
#include <vector>

int compute_564() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
