package main

// Auto-generated | 2026-05-13T20:46:45.973461
import "fmt"

func Process_833() int {
    base := 68
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
