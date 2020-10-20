// Auto-generated module | 2026-05-14T18:02:26.904735
#include <iostream>
#include <vector>

int compute_118() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
