package main

// Auto-generated | 2026-05-12T04:02:18.994260
import "fmt"

func Process_329() int {
    base := 321
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_329())
}
