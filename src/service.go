package main

// Auto-generated | 2026-05-12T04:15:50.610986
import "fmt"

func Process_127() int {
    base := 383
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_127())
}
