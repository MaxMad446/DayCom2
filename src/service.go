package main

// Auto-generated | 2026-05-13T22:03:23.012434
import "fmt"

func Process_538() int {
    base := 458
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
