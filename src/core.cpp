// Auto-generated module | 2026-05-12T04:23:46.715892
#include <iostream>
#include <vector>

int compute_387() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
