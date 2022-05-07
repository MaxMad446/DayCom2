package main

// Auto-generated | 2026-05-11T21:01:40.252705
import "fmt"

func Process_414() int {
    base := 99
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
