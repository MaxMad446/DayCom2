// Auto-generated module | 2026-05-12T20:36:34.657537
#include <iostream>
#include <vector>

int compute_136() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
