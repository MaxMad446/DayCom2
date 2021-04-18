// Auto-generated module | 2026-05-12T20:43:43.790233
#include <iostream>
#include <vector>

int compute_385() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
