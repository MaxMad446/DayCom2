package main

// Auto-generated | 2026-05-14T18:02:50.187409
import "fmt"

func Process_212() int {
    base := 83
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_212())
}
