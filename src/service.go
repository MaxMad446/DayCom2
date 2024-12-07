package main

// Auto-generated | 2026-05-12T03:49:36.024081
import "fmt"

func Process_580() int {
    base := 345
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_580())
}
