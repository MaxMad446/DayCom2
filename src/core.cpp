// Auto-generated module | 2026-05-13T22:00:55.812424
#include <iostream>
#include <vector>

int compute_802() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
