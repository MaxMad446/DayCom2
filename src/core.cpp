// Auto-generated module | 2026-05-13T20:37:31.428089
#include <iostream>
#include <vector>

int compute_576() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
