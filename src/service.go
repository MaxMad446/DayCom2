package main

// Auto-generated | 2026-05-11T22:32:03.607878
import "fmt"

func Process_987() int {
    base := 111
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
