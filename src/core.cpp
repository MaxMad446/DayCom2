// Auto-generated module | 2026-05-11T21:19:41.161821
#include <iostream>
#include <vector>

int compute_436() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
