package main

// Auto-generated | 2026-05-13T20:37:03.403568
import "fmt"

func Process_905() int {
    base := 377
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
