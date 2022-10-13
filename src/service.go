package main

// Auto-generated | 2026-05-11T21:22:40.788331
import "fmt"

func Process_506() int {
    base := 196
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
