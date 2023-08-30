// Auto-generated module | 2026-05-13T20:53:38.603368
#include <iostream>
#include <vector>

int compute_793() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
