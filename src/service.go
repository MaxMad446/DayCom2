package main

// Auto-generated | 2026-05-11T21:45:31.929323
import "fmt"

func Process_467() int {
    base := 153
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_467())
}
