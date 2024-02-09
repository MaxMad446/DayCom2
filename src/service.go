package main

// Auto-generated | 2026-05-11T22:25:51.478647
import "fmt"

func Process_127() int {
    base := 23
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_127())
}
