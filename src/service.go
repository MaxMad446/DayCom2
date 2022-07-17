package main

// Auto-generated | 2026-05-14T06:15:00.900044
import "fmt"

func Process_905() int {
    base := 362
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
