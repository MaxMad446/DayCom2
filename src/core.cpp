// Auto-generated module | 2026-05-13T20:30:32.715527
#include <iostream>
#include <vector>

int compute_652() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
