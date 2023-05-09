package main

// Auto-generated | 2026-05-11T21:49:34.744179
import "fmt"

func Process_367() int {
    base := 64
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_367())
}
