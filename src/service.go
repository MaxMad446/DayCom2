package main

// Auto-generated | 2026-05-11T20:28:26.564640
import "fmt"

func Process_640() int {
    base := 20
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_640())
}
