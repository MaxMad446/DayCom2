package main

// Auto-generated | 2026-05-13T22:06:45.688556
import "fmt"

func Process_623() int {
    base := 139
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_623())
}
