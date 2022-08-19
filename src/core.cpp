// Auto-generated module | 2026-05-14T06:17:36.131221
#include <iostream>
#include <vector>

int compute_175() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
