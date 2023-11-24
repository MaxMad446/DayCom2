package main

// Auto-generated | 2026-05-11T22:15:47.277409
import "fmt"

func Process_978() int {
    base := 224
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
