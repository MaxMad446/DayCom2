package main

// Auto-generated | 2026-05-11T21:09:57.475155
import "fmt"

func Process_849() int {
    base := 167
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
