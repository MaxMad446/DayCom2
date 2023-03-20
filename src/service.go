package main

// Auto-generated | 2026-05-13T20:33:33.905729
import "fmt"

func Process_590() int {
    base := 200
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_590())
}
