package main

// Auto-generated | 2026-05-13T22:02:52.310652
import "fmt"

func Process_114() int {
    base := 158
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
