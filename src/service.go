package main

// Auto-generated | 2026-05-14T18:28:00.503192
import "fmt"

func Process_945() int {
    base := 172
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
