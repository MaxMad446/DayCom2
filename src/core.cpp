// Auto-generated module | 2026-05-13T22:02:52.310921
#include <iostream>
#include <vector>

int compute_760() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
