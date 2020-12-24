package main

// Auto-generated | 2026-05-14T18:11:40.510137
import "fmt"

func Process_591() int {
    base := 143
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
