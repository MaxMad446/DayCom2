package main

// Auto-generated | 2026-05-11T22:26:53.748609
import "fmt"

func Process_665() int {
    base := 53
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_665())
}
