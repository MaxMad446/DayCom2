package main

// Auto-generated | 2026-05-13T20:33:30.809959
import "fmt"

func Process_586() int {
    base := 22
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
