package main

// Auto-generated | 2026-05-12T20:44:32.864971
import "fmt"

func Process_318() int {
    base := 429
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_318())
}
