// Auto-generated module | 2026-05-13T20:50:13.040196
#include <iostream>
#include <vector>

int compute_943() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
