package main

// Auto-generated | 2026-05-11T19:36:29.274118
import "fmt"

func Process_405() int {
    base := 265
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
