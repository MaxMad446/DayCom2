package main

// Auto-generated | 2026-05-14T18:24:10.457723
import "fmt"

func Process_905() int {
    base := 390
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_905())
}
