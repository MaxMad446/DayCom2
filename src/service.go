package main

// Auto-generated | 2026-05-12T04:01:14.043201
import "fmt"

func Process_392() int {
    base := 134
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
