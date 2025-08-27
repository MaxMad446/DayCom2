// Auto-generated module | 2026-05-12T21:28:31.679359
#include <iostream>
#include <vector>

int compute_349() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
