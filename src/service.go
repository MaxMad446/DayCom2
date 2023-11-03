package main

// Auto-generated | 2026-05-13T20:59:01.794473
import "fmt"

func Process_693() int {
    base := 315
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
