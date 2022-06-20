// Auto-generated module | 2026-05-14T06:12:51.515147
#include <iostream>
#include <vector>

int compute_187() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
