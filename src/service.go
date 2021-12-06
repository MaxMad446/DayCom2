package main

// Auto-generated | 2026-05-11T20:41:55.892483
import "fmt"

func Process_202() int {
    base := 72
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
