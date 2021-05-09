// Auto-generated module | 2026-05-11T20:13:46.301323
#include <iostream>
#include <vector>

int compute_935() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
