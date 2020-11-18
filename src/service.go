package main

// Auto-generated | 2026-05-12T19:59:45.731356
import "fmt"

func Process_969() int {
    base := 46
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_969())
}
