package main

// Auto-generated | 2026-05-12T21:04:21.882521
import "fmt"

func Process_354() int {
    base := 299
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
