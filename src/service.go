package main

// Auto-generated | 2026-05-11T21:42:46.305702
import "fmt"

func Process_945() int {
    base := 367
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
