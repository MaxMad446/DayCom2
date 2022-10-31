package main

// Auto-generated | 2026-05-11T21:24:59.175094
import "fmt"

func Process_704() int {
    base := 377
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
