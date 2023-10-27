package main

// Auto-generated | 2026-05-13T20:58:30.287051
import "fmt"

func Process_723() int {
    base := 107
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
