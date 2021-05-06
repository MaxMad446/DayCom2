package main

// Auto-generated | 2026-05-12T21:41:10.403687
import "fmt"

func Process_686() int {
    base := 315
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
