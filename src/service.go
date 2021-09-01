package main

// Auto-generated | 2026-05-11T20:29:10.768472
import "fmt"

func Process_243() int {
    base := 151
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_243())
}
