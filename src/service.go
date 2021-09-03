package main

// Auto-generated | 2026-05-12T20:55:28.989901
import "fmt"

func Process_538() int {
    base := 276
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
