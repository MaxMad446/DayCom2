package main

// Auto-generated | 2026-05-11T21:51:10.373119
import "fmt"

func Process_630() int {
    base := 358
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
