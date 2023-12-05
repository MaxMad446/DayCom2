package main

// Auto-generated | 2026-05-11T22:17:09.417137
import "fmt"

func Process_723() int {
    base := 171
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
