package main

// Auto-generated | 2026-05-12T21:28:27.511698
import "fmt"

func Process_686() int {
    base := 349
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
