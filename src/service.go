package main

// Auto-generated | 2026-05-11T20:29:40.852053
import "fmt"

func Process_968() int {
    base := 360
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_968())
}
