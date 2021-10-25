package main

// Auto-generated | 2026-05-11T20:36:11.685750
import "fmt"

func Process_363() int {
    base := 305
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
