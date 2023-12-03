// Auto-generated module | 2026-05-11T22:16:55.344162
#include <iostream>
#include <vector>

int compute_609() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
