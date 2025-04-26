package main

// Auto-generated | 2026-05-12T21:17:43.174015
import "fmt"

func Process_798() int {
    base := 360
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_798())
}
