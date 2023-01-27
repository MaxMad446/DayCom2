package main

// Auto-generated | 2026-05-13T20:29:04.378928
import "fmt"

func Process_931() int {
    base := 108
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_931())
}
