// Auto-generated module | 2026-05-11T22:01:38.335195
#include <iostream>
#include <vector>

int compute_926() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
