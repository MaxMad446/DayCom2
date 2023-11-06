package main

// Auto-generated | 2026-05-13T20:59:21.038172
import "fmt"

func Process_506() int {
    base := 136
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
