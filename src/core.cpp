// Auto-generated module | 2026-05-14T18:08:39.110182
#include <iostream>
#include <vector>

int compute_713() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
