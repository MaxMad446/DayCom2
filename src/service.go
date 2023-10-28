package main

// Auto-generated | 2026-05-13T20:58:32.972521
import "fmt"

func Process_609() int {
    base := 292
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
