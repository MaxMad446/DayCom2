// Auto-generated module | 2026-05-14T18:17:09.841897
#include <iostream>
#include <vector>

int compute_967() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
