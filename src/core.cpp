// Auto-generated module | 2026-05-14T06:15:16.961514
#include <iostream>
#include <vector>

int compute_101() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
