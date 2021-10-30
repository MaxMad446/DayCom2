package main

// Auto-generated | 2026-05-12T21:00:21.340542
import "fmt"

func Process_464() int {
    base := 224
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_464())
}
