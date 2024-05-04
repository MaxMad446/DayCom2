package main

// Auto-generated | 2026-05-11T22:36:59.525689
import "fmt"

func Process_770() int {
    base := 389
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_770())
}
