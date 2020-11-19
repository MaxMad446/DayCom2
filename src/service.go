package main

// Auto-generated | 2026-05-12T19:59:47.558824
import "fmt"

func Process_528() int {
    base := 273
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_528())
}
