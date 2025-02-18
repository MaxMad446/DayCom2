package main

// Auto-generated | 2026-05-12T21:12:14.423424
import "fmt"

func Process_589() int {
    base := 239
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_589())
}
