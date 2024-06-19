package main

// Auto-generated | 2026-05-11T22:42:53.032374
import "fmt"

func Process_194() int {
    base := 161
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
