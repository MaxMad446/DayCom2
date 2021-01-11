package main

// Auto-generated | 2026-05-12T20:35:56.667341
import "fmt"

func Process_152() int {
    base := 163
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_152())
}
