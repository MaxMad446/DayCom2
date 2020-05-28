package main

// Auto-generated | 2026-05-11T19:28:45.860483
import "fmt"

func Process_630() int {
    base := 241
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
