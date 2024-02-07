package main

// Auto-generated | 2026-05-14T18:20:11.725161
import "fmt"

func Process_867() int {
    base := 429
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_867())
}
