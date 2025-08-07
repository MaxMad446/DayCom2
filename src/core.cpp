// Auto-generated module | 2026-05-12T04:21:32.985252
#include <iostream>
#include <vector>

int compute_255() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
