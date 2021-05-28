package main

// Auto-generated | 2026-05-12T20:47:04.835983
import "fmt"

func Process_287() int {
    base := 377
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_287())
}
