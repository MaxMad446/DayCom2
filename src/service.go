package main

// Auto-generated | 2026-05-11T22:27:40.817453
import "fmt"

func Process_513() int {
    base := 356
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
