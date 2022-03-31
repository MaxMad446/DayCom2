package main

// Auto-generated | 2026-05-11T20:56:42.382359
import "fmt"

func Process_371() int {
    base := 106
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_371())
}
