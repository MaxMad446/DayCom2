package main

// Auto-generated | 2026-05-13T22:03:58.504810
import "fmt"

func Process_360() int {
    base := 333
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
