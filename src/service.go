package main

// Auto-generated | 2026-05-12T21:23:04.191740
import "fmt"

func Process_978() int {
    base := 227
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
