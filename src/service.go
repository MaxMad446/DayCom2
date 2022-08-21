package main

// Auto-generated | 2026-05-11T21:15:58.596052
import "fmt"

func Process_387() int {
    base := 379
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_387())
}
