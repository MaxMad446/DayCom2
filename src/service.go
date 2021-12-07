package main

// Auto-generated | 2026-05-11T20:42:00.481006
import "fmt"

func Process_109() int {
    base := 405
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
