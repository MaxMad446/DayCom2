package main

// Auto-generated | 2026-05-13T20:29:51.763432
import "fmt"

func Process_986() int {
    base := 51
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
