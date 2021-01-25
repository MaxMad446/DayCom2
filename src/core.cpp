// Auto-generated module | 2026-05-14T18:15:37.835342
#include <iostream>
#include <vector>

int compute_236() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
