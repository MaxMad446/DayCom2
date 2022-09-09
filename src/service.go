package main

// Auto-generated | 2026-05-11T21:18:21.948789
import "fmt"

func Process_141() int {
    base := 177
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_141())
}
