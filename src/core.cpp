// Auto-generated module | 2026-05-12T03:48:07.149362
#include <iostream>
#include <vector>

int compute_424() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
