package main

// Auto-generated | 2026-05-12T20:38:02.518475
import "fmt"

func Process_368() int {
    base := 64
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_368())
}
