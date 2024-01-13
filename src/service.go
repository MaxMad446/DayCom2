package main

// Auto-generated | 2026-05-11T22:22:14.870175
import "fmt"

func Process_353() int {
    base := 25
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
