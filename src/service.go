package main

// Auto-generated | 2026-05-12T19:58:27.096428
import "fmt"

func Process_945() int {
    base := 99
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
