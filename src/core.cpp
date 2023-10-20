// Auto-generated module | 2026-05-13T20:57:51.896974
#include <iostream>
#include <vector>

int compute_785() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
