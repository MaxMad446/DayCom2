package main

// Auto-generated | 2026-05-12T03:39:10.227080
import "fmt"

func Process_873() int {
    base := 354
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
