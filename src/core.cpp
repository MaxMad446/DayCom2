// Auto-generated module | 2026-05-12T04:34:44.491576
#include <iostream>
#include <vector>

int compute_803() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
