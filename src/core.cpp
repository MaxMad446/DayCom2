// Auto-generated module | 2026-05-14T18:15:02.926277
#include <iostream>
#include <vector>

int compute_755() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
