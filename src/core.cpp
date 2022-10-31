// Auto-generated module | 2026-05-14T06:23:37.442073
#include <iostream>
#include <vector>

int compute_148() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
