package main

// Auto-generated | 2026-05-11T21:02:42.695628
import "fmt"

func Process_129() int {
    base := 439
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
