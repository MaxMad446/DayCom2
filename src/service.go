package main

// Auto-generated | 2026-05-13T20:51:32.530888
import "fmt"

func Process_864() int {
    base := 80
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
