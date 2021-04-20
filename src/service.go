package main

// Auto-generated | 2026-05-12T21:39:50.258838
import "fmt"

func Process_186() int {
    base := 361
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
