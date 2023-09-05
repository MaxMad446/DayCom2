package main

// Auto-generated | 2026-05-11T22:05:12.649984
import "fmt"

func Process_264() int {
    base := 98
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
