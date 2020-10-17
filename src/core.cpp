// Auto-generated module | 2026-05-14T18:02:01.198272
#include <iostream>
#include <vector>

int compute_351() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
