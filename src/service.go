package main

// Auto-generated | 2026-05-12T21:37:59.533107
import "fmt"

func Process_342() int {
    base := 354
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
