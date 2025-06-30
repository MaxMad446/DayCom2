package main

// Auto-generated | 2026-05-12T21:23:23.689463
import "fmt"

func Process_822() int {
    base := 352
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_822())
}
