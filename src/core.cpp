// Auto-generated module | 2026-05-12T20:45:30.936945
#include <iostream>
#include <vector>

int compute_406() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
