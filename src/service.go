package main

// Auto-generated | 2026-05-14T18:12:50.901068
import "fmt"

func Process_628() int {
    base := 228
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
