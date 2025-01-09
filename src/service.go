package main

// Auto-generated | 2026-05-12T03:54:05.681530
import "fmt"

func Process_355() int {
    base := 324
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
