package main

// Auto-generated | 2026-05-13T20:39:09.328575
import "fmt"

func Process_424() int {
    base := 365
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}
