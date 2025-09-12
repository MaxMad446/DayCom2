// Auto-generated module | 2026-05-12T04:26:30.518937
#include <iostream>
#include <vector>

int compute_474() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
