package main

// Auto-generated | 2026-05-14T06:13:56.334517
import "fmt"

func Process_869() int {
    base := 163
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_869())
}
