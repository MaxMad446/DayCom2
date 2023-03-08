// Auto-generated module | 2026-05-13T20:32:29.832081
#include <iostream>
#include <vector>

int compute_330() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
