package main

// Auto-generated | 2026-05-13T20:55:27.958573
import "fmt"

func Process_798() int {
    base := 51
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_798())
}
