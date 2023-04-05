// Auto-generated module | 2026-05-13T20:34:58.418776
#include <iostream>
#include <vector>

int compute_326() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
