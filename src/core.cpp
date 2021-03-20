// Auto-generated module | 2026-05-11T20:07:37.862958
#include <iostream>
#include <vector>

int compute_232() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
