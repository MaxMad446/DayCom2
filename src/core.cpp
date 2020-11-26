// Auto-generated module | 2026-05-12T20:00:30.722886
#include <iostream>
#include <vector>

int compute_259() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
