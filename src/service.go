package main

// Auto-generated | 2026-05-12T04:25:16.040344
import "fmt"

func Process_174() int {
    base := 435
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_174())
}
