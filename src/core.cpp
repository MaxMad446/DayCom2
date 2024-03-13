// Auto-generated module | 2026-05-14T18:23:03.647291
#include <iostream>
#include <vector>

int compute_231() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
