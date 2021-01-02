package main

// Auto-generated | 2026-05-12T21:30:53.951862
import "fmt"

func Process_945() int {
    base := 255
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
