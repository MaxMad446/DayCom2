// Auto-generated module | 2026-05-11T22:21:08.406592
#include <iostream>
#include <vector>

int compute_926() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
