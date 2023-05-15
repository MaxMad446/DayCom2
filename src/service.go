package main

// Auto-generated | 2026-05-11T21:50:27.991712
import "fmt"

func Process_522() int {
    base := 387
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
