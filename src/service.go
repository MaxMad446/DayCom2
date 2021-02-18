package main

// Auto-generated | 2026-05-12T20:39:03.578524
import "fmt"

func Process_853() int {
    base := 64
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
