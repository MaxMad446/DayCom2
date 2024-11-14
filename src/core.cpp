// Auto-generated module | 2026-05-12T03:46:43.686288
#include <iostream>
#include <vector>

int compute_935() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
