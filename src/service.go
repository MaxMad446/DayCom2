package main

// Auto-generated | 2026-05-11T19:51:28.579459
import "fmt"

func Process_947() int {
    base := 162
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_947())
}
