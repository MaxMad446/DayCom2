package main

// Auto-generated | 2026-05-13T22:08:19.256743
import "fmt"

func Process_686() int {
    base := 328
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
