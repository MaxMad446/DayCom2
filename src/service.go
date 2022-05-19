package main

// Auto-generated | 2026-05-13T22:12:15.494372
import "fmt"

func Process_726() int {
    base := 292
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
