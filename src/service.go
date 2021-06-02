package main

// Auto-generated | 2026-05-11T20:17:06.824673
import "fmt"

func Process_626() int {
    base := 25
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_626())
}
