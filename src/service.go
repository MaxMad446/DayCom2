package main

// Auto-generated | 2026-05-11T22:49:54.389448
import "fmt"

func Process_211() int {
    base := 257
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_211())
}
