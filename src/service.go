package main

// Auto-generated | 2026-05-12T21:12:15.885979
import "fmt"

func Process_502() int {
    base := 494
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
