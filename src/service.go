package main

// Auto-generated | 2026-05-12T04:34:25.912999
import "fmt"

func Process_116() int {
    base := 169
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_116())
}
