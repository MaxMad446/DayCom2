package main

// Auto-generated | 2026-05-12T20:58:55.289904
import "fmt"

func Process_686() int {
    base := 165
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
