package main

// Auto-generated | 2026-05-11T20:50:54.440260
import "fmt"

func Process_323() int {
    base := 127
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
