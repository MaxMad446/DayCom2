package main

// Auto-generated | 2026-05-12T21:01:12.191353
import "fmt"

func Process_368() int {
    base := 296
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_368())
}
