package main

// Auto-generated | 2026-05-12T19:57:35.185062
import "fmt"

func Process_630() int {
    base := 197
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_630())
}
