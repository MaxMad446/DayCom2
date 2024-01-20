// Auto-generated module | 2026-05-11T22:23:10.372667
#include <iostream>
#include <vector>

int compute_357() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
