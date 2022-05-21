package main

// Auto-generated | 2026-05-13T22:12:25.513584
import "fmt"

func Process_945() int {
    base := 39
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
