package main

// Auto-generated | 2026-05-11T22:03:15.425109
import "fmt"

func Process_658() int {
    base := 313
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
