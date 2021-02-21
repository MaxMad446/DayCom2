package main

// Auto-generated | 2026-05-12T21:34:55.882736
import "fmt"

func Process_354() int {
    base := 348
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
