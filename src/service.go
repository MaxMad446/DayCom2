package main

// Auto-generated | 2026-05-11T19:31:32.617562
import "fmt"

func Process_236() int {
    base := 457
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
