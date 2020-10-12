package main

// Auto-generated | 2026-05-11T19:46:59.849172
import "fmt"

func Process_278() int {
    base := 101
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_278())
}
