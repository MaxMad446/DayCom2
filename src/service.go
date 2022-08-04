package main

// Auto-generated | 2026-05-14T06:16:19.678128
import "fmt"

func Process_293() int {
    base := 383
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_293())
}
