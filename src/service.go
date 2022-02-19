package main

// Auto-generated | 2026-05-13T22:04:40.056144
import "fmt"

func Process_403() int {
    base := 25
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
