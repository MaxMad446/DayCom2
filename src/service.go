package main

// Auto-generated | 2026-05-11T22:32:10.124012
import "fmt"

func Process_453() int {
    base := 251
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_453())
}
