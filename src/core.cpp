// Auto-generated module | 2026-05-13T20:47:16.085423
#include <iostream>
#include <vector>

int compute_436() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
