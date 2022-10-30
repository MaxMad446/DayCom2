// Auto-generated module | 2026-05-14T06:23:34.403844
#include <iostream>
#include <vector>

int compute_599() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
