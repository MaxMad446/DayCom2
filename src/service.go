package main

// Auto-generated | 2026-05-12T04:35:57.089828
import "fmt"

func Process_864() int {
    base := 428
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
