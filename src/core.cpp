// Auto-generated module | 2026-05-13T20:36:46.759651
#include <iostream>
#include <vector>

int compute_140() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
