// Auto-generated module | 2026-05-12T20:58:28.784176
#include <iostream>
#include <vector>

int compute_902() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_902() << std::endl;
    return 0;
}
