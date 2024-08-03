package main

// Auto-generated | 2026-05-11T22:48:53.750383
import "fmt"

func Process_902() int {
    base := 112
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
