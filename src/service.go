package main

// Auto-generated | 2026-05-13T22:05:13.505179
import "fmt"

func Process_630() int {
    base := 138
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
