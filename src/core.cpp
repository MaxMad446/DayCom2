// Auto-generated module | 2026-05-14T06:16:44.792924
#include <iostream>
#include <vector>

int compute_426() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
