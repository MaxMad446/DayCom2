// Auto-generated module | 2026-05-11T19:34:23.864626
#include <iostream>
#include <vector>

int compute_802() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
