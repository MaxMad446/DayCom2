package main

// Auto-generated | 2026-05-13T22:01:48.386940
import "fmt"

func Process_403() int {
    base := 440
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
