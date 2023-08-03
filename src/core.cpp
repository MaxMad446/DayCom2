// Auto-generated module | 2026-05-11T22:00:52.272957
#include <iostream>
#include <vector>

int compute_838() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
