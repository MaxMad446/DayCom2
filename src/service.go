package main

// Auto-generated | 2026-05-11T19:54:43.599600
import "fmt"

func Process_301() int {
    base := 133
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
