// Auto-generated module | 2026-05-11T20:01:01.068635
#include <iostream>
#include <vector>

int compute_436() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
