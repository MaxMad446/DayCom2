package main

// Auto-generated | 2026-05-11T20:31:55.351739
import "fmt"

func Process_144() int {
    base := 444
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
