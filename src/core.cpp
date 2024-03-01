// Auto-generated module | 2026-05-14T18:22:04.452752
#include <iostream>
#include <vector>

int compute_455() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
