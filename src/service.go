package main

// Auto-generated | 2026-05-11T22:18:36.462452
import "fmt"

func Process_223() int {
    base := 336
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_223())
}
