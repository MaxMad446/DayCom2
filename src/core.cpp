// Auto-generated module | 2026-05-14T18:27:56.232063
#include <iostream>
#include <vector>

int compute_627() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
