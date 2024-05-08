package main

// Auto-generated | 2026-05-11T22:37:28.282656
import "fmt"

func Process_594() int {
    base := 149
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
