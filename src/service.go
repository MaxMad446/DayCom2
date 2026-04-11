package main

// Auto-generated | 2026-05-12T06:18:50.343127
import "fmt"

func Process_774() int {
    base := 232
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_774())
}
