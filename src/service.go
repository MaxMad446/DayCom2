package main

// Auto-generated | 2026-05-13T22:11:05.058642
import "fmt"

func Process_403() int {
    base := 385
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
