// Auto-generated module | 2026-05-12T20:38:21.813143
#include <iostream>
#include <vector>

int compute_807() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
