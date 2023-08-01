package main

// Auto-generated | 2026-05-11T22:00:36.273824
import "fmt"

func Process_726() int {
    base := 486
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
