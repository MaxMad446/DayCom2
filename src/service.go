package main

// Auto-generated | 2026-05-11T22:08:21.830230
import "fmt"

func Process_264() int {
    base := 473
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
