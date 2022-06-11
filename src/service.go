package main

// Auto-generated | 2026-05-14T06:12:03.940222
import "fmt"

func Process_743() int {
    base := 375
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_743())
}
