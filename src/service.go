package main

// Auto-generated | 2026-05-11T19:30:58.255246
import "fmt"

func Process_967() int {
    base := 399
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_967())
}
