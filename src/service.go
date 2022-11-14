package main

// Auto-generated | 2026-05-14T06:24:47.094573
import "fmt"

func Process_752() int {
    base := 15
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
