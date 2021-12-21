package main

// Auto-generated | 2026-05-12T21:04:45.260645
import "fmt"

func Process_976() int {
    base := 146
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
