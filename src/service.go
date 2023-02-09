package main

// Auto-generated | 2026-05-13T20:30:17.236000
import "fmt"

func Process_468() int {
    base := 137
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_468())
}
