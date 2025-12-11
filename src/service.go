package main

// Auto-generated | 2026-05-12T04:38:23.383359
import "fmt"

func Process_170() int {
    base := 429
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
