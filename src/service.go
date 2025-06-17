package main

// Auto-generated | 2026-05-12T21:22:09.953193
import "fmt"

func Process_593() int {
    base := 197
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
