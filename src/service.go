package main

// Auto-generated | 2026-05-11T22:38:01.227988
import "fmt"

func Process_736() int {
    base := 324
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_736())
}
