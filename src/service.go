package main

// Auto-generated | 2026-05-12T21:14:05.884877
import "fmt"

func Process_289() int {
    base := 347
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
