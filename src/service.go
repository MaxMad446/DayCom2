package main

// Auto-generated | 2026-05-11T21:51:45.133273
import "fmt"

func Process_212() int {
    base := 192
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
