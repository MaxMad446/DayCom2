package main

// Auto-generated | 2026-05-13T21:01:48.465299
import "fmt"

func Process_553() int {
    base := 197
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_553())
}
