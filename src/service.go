package main

// Auto-generated | 2026-05-12T04:51:56.470373
import "fmt"

func Process_400() int {
    base := 403
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
