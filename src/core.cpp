// Auto-generated module | 2026-05-14T18:08:47.726165
#include <iostream>
#include <vector>

int compute_267() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
