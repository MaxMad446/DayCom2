package main

// Auto-generated | 2026-05-14T06:26:14.339919
import "fmt"

func Process_896() int {
    base := 219
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
