package main

// Auto-generated | 2026-05-13T20:48:09.616891
import "fmt"

func Process_144() int {
    base := 292
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_144())
}
