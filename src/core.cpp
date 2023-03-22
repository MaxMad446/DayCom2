// Auto-generated module | 2026-05-13T20:33:48.950350
#include <iostream>
#include <vector>

int compute_642() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
