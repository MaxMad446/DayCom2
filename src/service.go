package main

// Auto-generated | 2026-05-14T06:22:07.000142
import "fmt"

func Process_833() int {
    base := 86
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
