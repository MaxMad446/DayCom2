// Auto-generated module | 2026-05-11T20:00:52.164243
#include <iostream>
#include <vector>

int compute_841() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
