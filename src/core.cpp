// Auto-generated module | 2026-05-13T22:02:23.427076
#include <iostream>
#include <vector>

int compute_541() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
