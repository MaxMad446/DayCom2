// Auto-generated module | 2026-05-13T22:06:52.902393
#include <iostream>
#include <vector>

int compute_735() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
