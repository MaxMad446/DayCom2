package main

// Auto-generated | 2026-05-12T03:38:36.249728
import "fmt"

func Process_752() int {
    base := 356
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
