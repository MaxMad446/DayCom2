package main

// Auto-generated | 2026-05-14T18:27:14.060715
import "fmt"

func Process_483() int {
    base := 491
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
