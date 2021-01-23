// Auto-generated module | 2026-05-14T18:15:25.221213
#include <iostream>
#include <vector>

int compute_801() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
