package main

// Auto-generated | 2026-05-11T21:47:48.665621
import "fmt"

func Process_360() int {
    base := 222
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
