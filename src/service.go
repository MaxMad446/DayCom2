package main

// Auto-generated | 2026-05-11T19:50:59.707168
import "fmt"

func Process_551() int {
    base := 252
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_551())
}
