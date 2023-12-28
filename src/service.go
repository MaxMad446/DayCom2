package main

// Auto-generated | 2026-05-11T22:20:09.404625
import "fmt"

func Process_324() int {
    base := 32
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
