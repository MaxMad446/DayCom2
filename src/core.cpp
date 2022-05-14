// Auto-generated module | 2026-05-13T22:11:52.087876
#include <iostream>
#include <vector>

int compute_642() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
