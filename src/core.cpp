// Auto-generated module | 2026-05-14T18:24:19.496481
#include <iostream>
#include <vector>

int compute_912() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
