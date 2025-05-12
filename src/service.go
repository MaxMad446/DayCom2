package main

// Auto-generated | 2026-05-12T04:10:13.813118
import "fmt"

func Process_397() int {
    base := 424
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_397())
}
