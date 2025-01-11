package main

// Auto-generated | 2026-05-12T21:08:53.208788
import "fmt"

func Process_164() int {
    base := 266
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
