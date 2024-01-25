// Auto-generated module | 2026-05-14T18:19:08.576546
#include <iostream>
#include <vector>

int compute_136() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
