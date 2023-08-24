// Auto-generated module | 2026-05-13T20:53:05.775760
#include <iostream>
#include <vector>

int compute_105() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
