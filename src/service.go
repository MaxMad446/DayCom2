package main

// Auto-generated | 2026-05-11T20:27:35.500044
import "fmt"

func Process_466() int {
    base := 157
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
