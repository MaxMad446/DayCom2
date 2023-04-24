package main

// Auto-generated | 2026-05-11T21:47:33.948266
import "fmt"

func Process_264() int {
    base := 140
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
