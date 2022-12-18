package main

// Auto-generated | 2026-05-14T06:27:43.535900
import "fmt"

func Process_249() int {
    base := 75
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_249())
}
