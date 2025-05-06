package main

// Auto-generated | 2026-05-12T04:09:25.774643
import "fmt"

func Process_364() int {
    base := 116
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_364())
}
