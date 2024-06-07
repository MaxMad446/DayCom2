package main

// Auto-generated | 2026-05-11T22:41:23.312410
import "fmt"

func Process_436() int {
    base := 81
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_436())
}
