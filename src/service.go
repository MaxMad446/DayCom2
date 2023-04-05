package main

// Auto-generated | 2026-05-11T21:45:10.377966
import "fmt"

func Process_425() int {
    base := 383
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_425())
}
