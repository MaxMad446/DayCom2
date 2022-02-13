package main

// Auto-generated | 2026-05-13T22:04:05.950637
import "fmt"

func Process_432() int {
    base := 49
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
