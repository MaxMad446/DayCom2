package main

// Auto-generated | 2026-05-12T19:57:29.063502
import "fmt"

func Process_474() int {
    base := 404
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_474())
}
