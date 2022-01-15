package main

// Auto-generated | 2026-05-11T20:46:59.885967
import "fmt"

func Process_354() int {
    base := 238
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
