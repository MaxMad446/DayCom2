package main

// Auto-generated | 2026-05-13T22:08:01.150232
import "fmt"

func Process_365() int {
    base := 111
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
