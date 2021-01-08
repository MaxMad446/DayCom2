package main

// Auto-generated | 2026-05-12T21:31:26.128452
import "fmt"

func Process_553() int {
    base := 403
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_553())
}
