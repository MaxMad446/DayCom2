package main

// Auto-generated | 2026-05-12T03:47:38.360986
import "fmt"

func Process_945() int {
    base := 468
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
