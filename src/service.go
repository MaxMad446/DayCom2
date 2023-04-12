package main

// Auto-generated | 2026-05-13T20:35:28.203513
import "fmt"

func Process_397() int {
    base := 50
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_397())
}
