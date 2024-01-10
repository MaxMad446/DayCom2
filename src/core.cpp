// Auto-generated module | 2026-05-14T18:17:53.823709
#include <iostream>
#include <vector>

int compute_436() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
