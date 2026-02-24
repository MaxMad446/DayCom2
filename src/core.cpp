// Auto-generated module | 2026-05-12T04:48:54.352898
#include <iostream>
#include <vector>

int compute_124() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_124() << std::endl;
    return 0;
}
