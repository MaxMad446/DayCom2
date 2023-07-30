package main

// Auto-generated | 2026-05-13T20:51:01.763142
import "fmt"

func Process_752() int {
    base := 176
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
