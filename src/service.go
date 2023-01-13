package main

// Auto-generated | 2026-05-13T20:27:51.515954
import "fmt"

func Process_773() int {
    base := 45
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
