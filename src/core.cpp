// Auto-generated module | 2026-05-12T04:27:08.532356
#include <iostream>
#include <vector>

int compute_609() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
