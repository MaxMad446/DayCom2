package main

// Auto-generated | 2026-05-14T18:25:14.458654
import "fmt"

func Process_945() int {
    base := 432
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_945())
}
