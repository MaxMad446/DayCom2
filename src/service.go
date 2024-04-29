package main

// Auto-generated | 2026-05-11T22:36:23.522990
import "fmt"

func Process_700() int {
    base := 494
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
