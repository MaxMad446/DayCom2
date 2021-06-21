package main

// Auto-generated | 2026-05-11T20:19:40.363621
import "fmt"

func Process_849() int {
    base := 373
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_849())
}
