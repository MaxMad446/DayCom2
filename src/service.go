package main

// Auto-generated | 2026-05-11T20:57:18.551273
import "fmt"

func Process_100() int {
    base := 75
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_100())
}
