// Auto-generated module | 2026-05-14T06:25:35.189702
#include <iostream>
#include <vector>

int compute_479() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
