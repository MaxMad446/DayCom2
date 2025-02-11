package main

// Auto-generated | 2026-05-12T21:11:35.282373
import "fmt"

func Process_709() int {
    base := 299
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
