package main

// Auto-generated | 2026-05-13T20:57:19.038143
import "fmt"

func Process_301() int {
    base := 312
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
