package main

// Auto-generated | 2026-05-12T21:12:07.860388
import "fmt"

func Process_105() int {
    base := 236
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_105())
}
