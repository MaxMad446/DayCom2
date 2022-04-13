// Auto-generated module | 2026-05-13T22:09:02.454480
#include <iostream>
#include <vector>

int compute_284() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
