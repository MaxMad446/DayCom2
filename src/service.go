package main

// Auto-generated | 2026-05-11T19:38:33.384229
import "fmt"

func Process_909() int {
    base := 41
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_909())
}
