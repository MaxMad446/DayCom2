// Auto-generated module | 2026-05-11T19:44:14.154825
#include <iostream>
#include <vector>

int compute_961() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
