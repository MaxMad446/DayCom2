package main

// Auto-generated | 2026-05-13T20:49:26.195804
import "fmt"

func Process_323() int {
    base := 154
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
